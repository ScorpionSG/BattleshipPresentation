#include "include/Cursor.h"
#include <thread>
#include <chrono>

static bool inputCheckerRunning;
enum blinkThreadCommand { blink, dont_blink, dont_update};
blinkThreadCommand currentBlinkThreadCommand = blink;
static Board* s_board;
static Cursor* s_cursor;

static int threadWASD;

void update();

void clearConsole();

void cursorTimer();

int main() {
    //system("save_state=$(stty -g)");
    system("stty raw -echo");

    bool running = true;

    //Creates the board, creates the tiles for the board, and then creates a print vector
    Board board;
    board.initTileGrid();
    board.printToVector();

    //Creates the cursor and attaches it to the board
    Cursor cursor(board);

    //Clears the console, prints the print vector, and draws the cursor if cursor.shouldBlink == true
    //cursor.shouldBlink == true by default
    update();

    //Ignore "escapes local scope" message
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreturn-stack-address"
    s_board = &board;
    s_cursor = &cursor;
#pragma clang diagnostic pop

    //Create timer thread
    std::thread blinkTimer(cursorTimer);

    int wasdDirection;
    while (running) {
        bool switchRunning = true;
        while (switchRunning) {
            wasdDirection = getchar();
            switch (wasdDirection) {
                case 119: //Character W
                    cursor.moveCursorUp();
//                    currentBlinkThreadCommand = 4;
//                    clearConsole();
//                    board.printToVector();
//                    board.replacePrintVectorElement(cursor.getCursorIndex(), cursor.getIcon());
//                    board.printBoard();
                    update();
                    break;
                case 97: //Character A
                    cursor.moveCursorLeft();
                    currentBlinkThreadCommand = dont_update;
                    update();
                    break;
                case 115: //Character S
                    cursor.moveCursorDown();
                    currentBlinkThreadCommand = dont_update;
                    update();
                    break;
                case 100: //Character D
                    cursor.moveCursorRight();
                    currentBlinkThreadCommand = dont_update;
                    update();
                    break;
                case 32: //Space bar
                    if (board.getTileGridTile(cursor.getCursorIndex())->getIcon() == '#') {
                        board.getTileGridTile(cursor.getCursorIndex())->setIcon('O');
                        currentBlinkThreadCommand = dont_update;
                        update();
                    } else {
                        board.getTileGridTile(cursor.getCursorIndex())->setIcon('#'); //main
                        currentBlinkThreadCommand = dont_update;
                        update();
                    }
                    break;
                case 120: //Character X
                    switchRunning = false;
                    running = false;
                    break;
                default:
                    break;
            }
        }
        system("stty cooked");
        system("stty echo");
    }
    clearConsole();
    blinkTimer.join();

    std::cin.get();
    return 0;
}

void clearConsole() {
    system(R"(clear && printf '\e[3J')");
}

void update() {
    //For all intents and purposes, the cursor icon IS visible while shouldBlink == true
    //Therefore, you cannot see the icon of the tile beneath the cursor while shouldBlink == true
    Board board = *s_board;
    Cursor cursor = *s_cursor;

    clearConsole();
    board.printToVector();
    if (cursor.getShouldBlink()) {
        board.replacePrintVectorElement(cursor.getCursorIndex(), cursor.getIcon());
    }
    board.printBoard();
}

void cursorTimer() {
    using namespace std::literals::chrono_literals;
    Board board = *s_board;
    Cursor cursor = *s_cursor;

    inputCheckerRunning = true;
    currentBlinkThreadCommand = blink;

    while (inputCheckerRunning) {
        if (currentBlinkThreadCommand == blink) {
            if (!cursor.getShouldBlink()) {
                cursor.setShouldBlink(true);
            }
            update();
        } else if (currentBlinkThreadCommand == dont_blink) {
            if (cursor.getShouldBlink()) {
                cursor.setShouldBlink(false);
            }
            update();
        } else if (currentBlinkThreadCommand == dont_update) {
            if (cursor.getShouldBlink()) {
                cursor.setShouldBlink(false);
            }
        }
        std::this_thread::sleep_for(0.5s);
    }
}
