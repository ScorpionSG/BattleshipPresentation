//
// Created by Ali Elnour on 6/26/18.
//

#include "../include/Cursor.h"

Cursor::Cursor() {
    attachedTo = new Board();
}

Cursor::Cursor(Board &board) {
    cursorIndex = 0;
    attachToBoard(board);
}

int &Cursor::getCursorIndex() {
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

void Cursor::attachToBoard(Board &board) {
    attachedTo = &board;
    attachedGridWidth = attachedTo->getWidth();
    attachedGridHeight = attachedTo->getHeight();
}

void Cursor::moveCursor(Cursor::cursorDirection Direction) {
    switch (Direction) {
        case UP:
            if (cursorIndex + attachedTo->getWidth() <= attachedTo->getTileGridLength() - 1) {
                cursorIndex += attachedTo->getWidth();
                //attachedTo->replacePrintVectorElement(cursorIndex, icon);
            }
            break;
        case DOWN:
            if (cursorIndex - attachedTo->getWidth() >= 0) {
                cursorIndex -= attachedTo->getWidth();
                //attachedTo->replacePrintVectorElement(cursorIndex, icon);
            }
            break;
        case LEFT:
            if (cursorIndex - 1 >= 0 && cursorIndex % attachedTo->getWidth() != 0) {
                cursorIndex -= 1;
                //attachedTo->replacePrintVectorElement(cursorIndex, icon);
            }
            break;
        case RIGHT:
            if (cursorIndex + 1 <= attachedTo->getTileGridLength() && (cursorIndex + 1) % attachedTo->getWidth() != 0) {
                cursorIndex += 1;
                //attachedTo->replacePrintVectorElement(cursorIndex, icon);
            }
            break;
        default:
            break;
    }
}

bool Cursor::getShouldBlink() {
    return shouldBlink;
}

void Cursor::setShouldBlink(bool boolean) {
    shouldBlink = boolean;
}

void Cursor::attackTile() {
    Tile *focusTile = attachedTo->getTileGridTile(cursorIndex);
    if (focusTile->getCurrentTileStatus() == Tile::Hit) {

        focusTile->setIconThroughStatus();
    } else if (focusTile->getCurrentTileStatus() == Tile::Miss) {

        focusTile->setIconThroughStatus();
    } else if (focusTile->getCurrentTileStatus() == Tile::Occupied) {

        focusTile->setCurrentTileStatus(Tile::Hit);
        focusTile->setIconThroughStatus();
    } else if (focusTile->getCurrentTileStatus() == Tile::Unoccupied) {

        attachedTo->setAmmo(attachedTo->getAmmo() - 1);
        focusTile->setCurrentTileStatus(Tile::Miss);
        focusTile->setIconThroughStatus();
    }
}
