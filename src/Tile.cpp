//
// Created by Ali Elnour on 6/26/18.
//

#include "../include/Tile.h"

Tile::Tile() = default;

Tile::Tile(int x, int y) {
    xCoord = x;
    yCoord = y;
    icon = '#';
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

void Tile::setXCoord(int x) {
    xCoord = x;
}

void Tile::setYCoord(int y) {
    yCoord = y;
}

void Tile::setIcon(char c) {
    icon = c;
}
