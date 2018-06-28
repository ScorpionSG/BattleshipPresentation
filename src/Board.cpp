//
// Created by Ali Elnour on 6/26/18.
//

#include "../include/Board.h"


Board::Board() {
    gridWidth = 5;
    gridHeight = 5;
}

Board::Board(int &size) {
    gridWidth = size;
    gridHeight = size;
}

Board::Board(int &width, int &height) {
    gridWidth = width;
    gridHeight = height;
}

Board::~Board() {
    tileGrid.clear();
}

int Board::getTileVectorIndex(int &x, int &y) {
    return y * gridHeight + x;
}

int Board::getTileGridLength() {
    return static_cast<int>(tileGrid.size());
}

int Board::getWidth() {
    return gridWidth;
}

int Board::getHeight() {
    return gridHeight;
}

Tile* Board::getTileGridTile(int& index) {
    return &tileGrid[index];
}

void Board::initTileGrid() {
    for (int iY = 0; iY < gridHeight; iY++) {
        for (int iX = 0; iX < gridWidth; iX++) {
            tileGrid.emplace_back(Tile(iX, iY));
        }
    }
}

void Board::printBoard() {
    for (int iY = gridHeight - 1; iY >= 0; iY--) {
        for (int iX = 0; iX < gridWidth; iX++) {
            std::cout << printVector[getTileVectorIndex(iX, iY)];
        }
        std::cout << '\r' << '\n';
    }
}

void Board::printToVector() {
    printVector.clear();
//    for (int iY = gridHeight - 1; iY >= 0; iY--) {
//        for (int iX = 0; iX < gridWidth; iX++) {
//            printVector.push_back(tileGrid[getTileVectorIndex(iX, iY)].getIcon());
//        }
//    }
    for (int iY = 0; iY < gridHeight; iY++) {
        for (int iX = 0; iX < gridWidth; iX++) {
            printVector.push_back(tileGrid[getTileVectorIndex(iX, iY)].getIcon());
        }
    }
}

void Board::replacePrintVectorElement(int& pos, char c) {
    printVector[pos] = c;
}

void Board::printBoardCoord() {
    for (int iY = gridHeight - 1; iY >= 0; iY--) {
        for (int iX = 0; iX < gridWidth; iX++) {
            std::cout << "(" << tileGrid[getTileVectorIndex(iX, iY)].getXCoord() << ", "
                      << tileGrid[getTileVectorIndex(iX, iY)].getYCoord() << ") ";
        }
        std::cout << std::endl;
    }
}