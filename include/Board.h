//
// Created by Ali Elnour on 6/26/18.
//

#ifndef BATTLESHIPGAME_BOARD_H
#define BATTLESHIPGAME_BOARD_H

#include "Tile.h"
#include <iostream>

class Board {
private:
    int gridWidth, gridHeight;
    int ammo;
    std::vector<Tile> tileGrid;
    std::vector<char> printVector;
    std::vector<Ship> shipList;

public:
    Board();

    explicit Board(int &size);

    Board(int& width, int& height);

    ~Board();

    int getTileVectorIndex(int& x, int& y);

    int getTileGridLength();

    int getWidth();

    int getHeight();

    int getAmmo();

    void setAmmo(int x);

    Tile* getTileGridTile(int index);

    void initTileGrid();

    void initShip(int position, int length, Ship::shipDirection direction);

    void addToShipList(Ship ship);

    void printBoard();

    void printToVector();

    void replacePrintVectorElement(int& pos, char c);

    void printBoardCoord();

    void printAmmo();
};


#endif //BATTLESHIPGAME_BOARD_H
