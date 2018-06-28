#include "include/Cursor.h"
#include <thread>
#include <chrono>

static bool inputCheckerRunning;
static int blinkCountdown;
static Board* s_board;
static Cursor* s_cursor;

static int threadWASD;

void update();

void clearConsole();

void cursorTimer() {
    using namespace std::literals::chrono_literals;
    Board* board = s_board;
    Cursor* cursor = s_cursor;

    inputCheckerRunning = true;
    blinkCountdown = 0;

    while (inputCheckerRunning) {
        if (blinkCountdown == 0) {
            blinkCountdown = 4;
        }
        if (blinkCountdown % 2 != 0) {
            (*cursor).setIcon('_');
            clearConsole();
            (*board).printToVector();
            (*board).replacePrintVectorElement((*cursor).getCursorIndex(), (*cursor).getIcon());
            //system("stty cooked");
            //(*board).printBoard();
        } else {
            (*cursor).setIcon((*board).getTileGridTile((*cursor).getCursorIndex())->getIcon());
            clearConsole();
            (*board).printToVector();
            (*board).replacePrintVectorElement((*cursor).getCursorIndex(), (*cursor).getIcon());
            //system("stty cooked");
            //(*board).printBoard();
        }
        //system("stty cooked");
        (*board).printBoard();
        system("stty raw");
        std::this_thread::sleep_for(0.5s);
        blinkCountdown--;
    }
}

void blinkThenUpdate(Board& board, Cursor& cursor) {
    if (blinkCountdown % 2 == 0) {
        cursor.setIcon('_');
    } else {
        cursor.setIcon(board.getTileGridTile(cursor.getCursorIndex())->getIcon());
    }
}

int main() {
    system("save_state=$(stty -g)");

    bool running = true;

    Board board;

    board.initTileGrid();
    board.printToVector();

    Cursor cursor(board);
    board.replacePrintVectorElement(cursor.getCursorIndex(), cursor.getIcon());
    board.printBoard();

    //update();

    //Create timer thread
    //void(*threadFood)(Board* board, Cursor* cursor) = cursorTimer;
    s_board = &board;
    s_cursor = &cursor;
    std::thread blinkTimer(cursorTimer);

    int wasdDirection;
    while (running) {
        bool switchRunning = true;
        //system("stty -echo");
        //system("stty icrnl inlcr ocrnl onlcr igncr ignbrk");
        while (switchRunning) {
            system("stty raw -echo");
            wasdDirection = getchar();
            switch (wasdDirection) {
                case 119: //Character W
                    //system("stty \"$save_state\"");
                    cursor.moveCursorUp();
                    blinkCountdown = 4;
                    //clearConsole();
                    //board.printBoard();
                    clearConsole();
                    board.printToVector();
                    board.replacePrintVectorElement(cursor.getCursorIndex(), cursor.getIcon());
                    //system("stty cooked");
                    board.printBoard();
                    break;
                case 97: //Character A
                    cursor.moveCursorLeft();
                    blinkCountdown = 4;
                    clearConsole();
                    board.printToVector();
                    board.replacePrintVectorElement(cursor.getCursorIndex(), cursor.getIcon());
                    //system("stty cooked");
                    board.printBoard();
                    break;
                case 115: //Character S
                    cursor.moveCursorDown();
                    blinkCountdown = 4;
                    clearConsole();
                    board.printToVector();
                    board.replacePrintVectorElement(cursor.getCursorIndex(), cursor.getIcon());
                    //system("stty cooked");
                    board.printBoard();
                    break;
                case 100: //Character D
                    cursor.moveCursorRight();
                    blinkCountdown = 4;
                    clearConsole();
                    board.printToVector();
                    board.replacePrintVectorElement(cursor.getCursorIndex(), cursor.getIcon());
                    //system("stty cooked");
                    board.printBoard();
                    break;
                case 32: //Space bar
                    if (board.getTileGridTile(cursor.getCursorIndex())->getIcon() == '#') {
                        board.getTileGridTile(cursor.getCursorIndex())->setIcon('O');
                        blinkCountdown = 4;
                        clearConsole();
                        board.printToVector();
                        board.replacePrintVectorElement(cursor.getCursorIndex(), cursor.getIcon());
                        //system("stty cooked");
                        board.printBoard();
                    } else {
                        board.getTileGridTile(cursor.getCursorIndex())->setIcon('#'); //main
                        blinkCountdown = 4;
                        clearConsole();
                        board.printToVector();
                        board.replacePrintVectorElement(cursor.getCursorIndex(), cursor.getIcon());
                        //system("stty cooked");
                        board.printBoard();
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
    system("clear");
}

void update() {
    clearConsole();
}