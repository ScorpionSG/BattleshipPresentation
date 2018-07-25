//
// Created by Ali Elnour on 6/26/18.
//

#include "../include/Tile.h"

Tile::Tile() = default;

Tile::Tile(int x, int y) {
    xCoord = x;
    yCoord = y;
    icon = '#';
    currentTileStatus = Unoccupied;
}

int Tile::getXCoord() {
    return xCoord;
}

int Tile::getYCoord() {
    return yCoord;
}

char Tile::getIcon() {
    return icon;
}

bool Tile::getIsOccupied() {
    return isOccupied;
    //email: willechase@outlook
}

Tile::tileStatus Tile::getCurrentTileStatus() {
    return currentTileStatus;
}

void Tile::setXCoord(int x) {
    xCoord = x;
}

void Tile::setYCoord(int y) {
    yCoord = y;
}

void Tile::setIcon(char c) {
    icon = c;
}

void Tile::setIsOccupied(bool b) {
    isOccupied = b;
}

void Tile::setOccupiedBy(Ship* ship) {
    occupiedBy = ship;
    currentTileStatus = Occupied;
}

void Tile::setOccupiedBySegment(int segment) {
    occupiedBySegment = segment;
}

void Tile::setCurrentTileStatus(Tile::tileStatus status) {
    currentTileStatus = status;
}

void Tile::setIconThroughStatus() {
    switch(currentTileStatus) {
        case Unoccupied:
            icon = '#';
            break;
        case Occupied:
            icon = '$';
            break;
        case Miss:
            icon = 'O';
            break;
        case Hit:
            icon = 'X';
            break;
        default:
            break;
    }
}

void Tile::occupyWithShip(Ship &ship) {
    occupiedBy = &ship;
    isOccupied = true;
}
