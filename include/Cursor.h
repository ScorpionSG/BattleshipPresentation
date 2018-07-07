//
// Created by Ali Elnour on 6/26/18.
//

#ifndef BATTLESHIPGAME_CURSOR_H
#define BATTLESHIPGAME_CURSOR_H

#include "Board.h"

class Cursor {
public:
    enum cursorDirection { UP, DOWN, LEFT, RIGHT };
private:
    int cursorIndex;
    Board *attachedTo;
    int attachedGridWidth, attachedGridHeight;
    char icon = '_'; //36 for $
    bool shouldBlink = true;

public:
    Cursor();

    explicit Cursor(Board& board);

    int & getCursorIndex();

    char getIcon();

    bool getShouldBlink();

    void setIcon(char c);

    void setCursorIndex(int x);

    void setShouldBlink(bool boolean);

    void attachToBoard(Board& board);

    void moveCursor(cursorDirection Direction);

    void attackTile();
};


#endif //BATTLESHIPGAME_CURSOR_H
