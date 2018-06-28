//
// Created by Ali Elnour on 6/26/18.
//

#ifndef BATTLESHIPGAME_CURSOR_H
#define BATTLESHIPGAME_CURSOR_H

#include "Board.h"

class Cursor {
private:
    int cursorIndex;
    Board *attachedTo;
    int attachedGridWidth, attachedGridHeight;
    char icon = '_'; //36 for $

public:
    Cursor();

    explicit Cursor(Board& board);

    ~Cursor();

    int & getCursorIndex();

    char getIcon();

    void setIcon(char c);

    void setCursorIndex(int x);

    void attachToBoard(Board& board);

    void moveCursorRight();

    void moveCursorLeft();

    void moveCursorUp();

    void moveCursorDown();
};


#endif //BATTLESHIPGAME_CURSOR_H
