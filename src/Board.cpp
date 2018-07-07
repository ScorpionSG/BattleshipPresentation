//
// Created by Ali Elnour on 6/26/18.
//

#include "../include/Board.h"


Board::Board() {
    gridWidth = 5;
    gridHeight = 5;
    ammo = 3;
}

Board::Board(int &size) {
    gridWidth = size;
    gridHeight = size;
    ammo = 3;
}

Board::Board(int &width, int &height) {
    gridWidth = width;
    gridHeight = height;
    ammo = 3;
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

int Board::getAmmo() {
    return ammo;
}

void Board::setAmmo(int x) {
    ammo = x;
}

Tile* Board::getTileGridTile(int index) {
    return &tileGrid[index];
}

void Board::initTileGrid() {
    for (int iY = 0; iY < gridHeight; iY++) {
        for (int iX = 0; iX < gridWidth; iX++) {
            tileGrid.emplace_back(Tile(iX, iY));
        }
    }
}

void Board::initShip(int position, int length, Ship::shipDirection direction) {
    shipList.emplace_back(Ship(gridWidth, gridHeight, position, length, direction));
    tileGrid[position].setIsOccupied(true);
    tileGrid[position].setOccupiedBy(&shipList.back());
    tileGrid[position].setOccupiedBySegment(0);
    tileGrid[position].setIconThroughStatus();
    shipList.back().createSegment(length - 1, direction);
    for (int i = 1; i < length; i++) {
        tileGrid[shipList.back().getSegmentCoordinatesAtIndex(i)].setIsOccupied(true);
        tileGrid[shipList.back().getSegmentCoordinatesAtIndex(i)].setOccupiedBy(&shipList.back());
        tileGrid[shipList.back().getSegmentCoordinatesAtIndex(i)].setOccupiedBySegment(i);
        tileGrid[shipList.back().getSegmentCoordinatesAtIndex(i)].setIconThroughStatus();
    }
}

void Board::addToShipList(Ship ship) {
    shipList.emplace_back(ship);
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

void Board::printAmmo() {
    std::cout << '\r' << '\n';
    std::cout << "Ammo remaining: " << ammo << '\r' << '\n';
}