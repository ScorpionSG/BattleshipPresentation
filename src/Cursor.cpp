//
// Created by Ali Elnour on 6/26/18.
//

#include "../include/Cursor.h"

Cursor::Cursor() {
    attachedTo = new Board();
}

Cursor::Cursor(Board& board) {
    cursorIndex = 0;
    attachToBoard(board);
}

Cursor::~Cursor() = default;

int & Cursor::getCursorIndex() {
    return cursorIndex;
}

char Cursor::getIcon() {
    return icon;
}

void Cursor::setIcon(char c) {
    icon = c;
}

void Cursor::setCursorIndex(int x) {
    cursorIndex = x;
}

void Cursor::attachToBoard(Board& board) {
    attachedTo = &board;
    attachedGridWidth = attachedTo->getWidth();
    attachedGridHeight = attachedTo->getHeight();
}

void Cursor::moveCursorRight() {
    if (cursorIndex + 1 <= attachedTo->getTileGridLength() && (cursorIndex + 1) % attachedTo->getWidth() != 0) {
        cursorIndex += 1;
        attachedTo->replacePrintVectorElement(cursorIndex, icon);
    }
}

void Cursor::moveCursorLeft() {
    if (cursorIndex - 1 >= 0 && cursorIndex % attachedTo->getWidth() != 0) {
        cursorIndex -= 1;
        attachedTo->replacePrintVectorElement(cursorIndex, icon);
    }
}

void Cursor::moveCursorUp() {
    if (cursorIndex + attachedTo->getWidth() <= attachedTo->getTileGridLength() - 1) {
        cursorIndex += attachedTo->getWidth();
        attachedTo->replacePrintVectorElement(cursorIndex, icon);
    }
}

void Cursor::moveCursorDown() {
    if (cursorIndex - attachedTo->getWidth() >= 0) {
        cursorIndex -= attachedTo->getWidth();
        attachedTo->replacePrintVectorElement(cursorIndex, icon);
    }
}