//
// Created by Ali Elnour on 6/26/18.
//

#ifndef BATTLESHIPGAME_BOARD_H
#define BATTLESHIPGAME_BOARD_H

#include "Tile.h"
#include <iostream>
#include <vector>

class Board {
private:
    int gridWidth, gridHeight;
    std::vector<Tile> tileGrid;
    std::vector<char> printVector;

public:
    Board();

    explicit Board(int &size);

    Board(int& width, int& height);

    ~Board();

    int getTileVectorIndex(int& x, int& y);

    int getTileGridLength();

    int getWidth();

    int getHeight();

    Tile* getTileGridTile(int& index);

    void initTileGrid();

    void printBoard();

    void printToVector();

    void replacePrintVectorElement(int& pos, char c);

    void printBoardCoord();
};


#endif //BATTLESHIPGAME_BOARD_H
