#include "include/Cursor.h"
#include <thread>
#include <chrono>

static bool inputCheckerRunning;
enum blinkThreadCommand { blink, dont_blink, dont_update, dont_update_attack };
blinkThreadCommand currentBlinkThreadCommand;
static Board* s_board;
static Cursor* s_cursor;

static int threadWASD;

void update(bool blink);

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
    board.printToVector();
    board.printBoard();

    //Ignore "escapes local scope" message
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreturn-stack-address"
    s_board = &board;
    s_cursor = &cursor;
#pragma clang diagnostic pop
    //Create timer thread
    std::thread blinkTimer(cursorTimer);
    currentBlinkThreadCommand = blink;

    int wasdDirection;
    while (running) {
        bool switchRunning = true;
        while (switchRunning) {
            wasdDirection = getchar();
            switch (wasdDirection) {
                case 119: //Character W
                    cursor.moveCursorUp();
                    update(true);
                    currentBlinkThreadCommand = dont_update;
                    break;
                case 97: //Character A
                    cursor.moveCursorLeft();
                    update(true);
                    currentBlinkThreadCommand = dont_update;
                    break;
                case 115: //Character S
                    cursor.moveCursorDown();
                    update(true);
                    currentBlinkThreadCommand = dont_update;
                    break;
                case 100: //Character D
                    cursor.moveCursorRight();
                    update(true);
                    currentBlinkThreadCommand = dont_update;
                    break;
                case 32: //Space bar
                    if (board.getTileGridTile(cursor.getCursorIndex())->getIcon() == '#') {
                        board.getTileGridTile(cursor.getCursorIndex())->setIcon('O');
                        update(false);
                        currentBlinkThreadCommand = dont_update_attack;
                    } else {
                        board.getTileGridTile(cursor.getCursorIndex())->setIcon('#'); //main
                        update(false);
                        currentBlinkThreadCommand = dont_update_attack;
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

void update(bool blink) {
    //For all intents and purposes, the cursor icon IS visible while shouldBlink == true
    //Therefore, you cannot see the icon of the tile beneath the cursor while shouldBlink == true
    Board board = *s_board;
    Cursor cursor = *s_cursor;

    clearConsole();
    board.printToVector();
    if (blink) {
        board.replacePrintVectorElement(cursor.getCursorIndex(), cursor.getIcon());
    }
    board.printBoard();
}

void cursorTimer() {
    using namespace std::literals::chrono_literals;
    Board board = *s_board;
    Cursor cursor = *s_cursor;

    inputCheckerRunning = true;

    while (inputCheckerRunning) {
        if (currentBlinkThreadCommand == blink) {
            update(true);
            currentBlinkThreadCommand = dont_blink;
            std::this_thread::sleep_for(0.5s);
        } else if (currentBlinkThreadCommand == dont_blink) {
            update(false);
            currentBlinkThreadCommand = blink;
            std::this_thread::sleep_for(0.5s);
        } else if (currentBlinkThreadCommand == dont_update) {
            currentBlinkThreadCommand = dont_blink;
            std::this_thread::sleep_for(0.5s);
        } else if (currentBlinkThreadCommand == dont_update_attack) {
            currentBlinkThreadCommand = blink;
            std::this_thread::sleep_for(0.5s);
        }
    }
}
