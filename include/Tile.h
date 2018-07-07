//
// Created by Ali Elnour on 6/26/18.
//

#ifndef BATTLESHIPGAME_TILE_H
#define BATTLESHIPGAME_TILE_H

#include "Ship.h"

class Tile {
public:
    enum tileStatus {
        Occupied, Unoccupied, Miss, Hit
    };
private:
    int xCoord, yCoord;
    char icon;
    tileStatus currentTileStatus;
    bool isOccupied;
    Ship* occupiedBy;
    int occupiedBySegment;
public:
    Tile();

    Tile(int x, int y);

    int getXCoord();

    int getYCoord();

    char getIcon();

    bool getIsOccupied();

    tileStatus getCurrentTileStatus();

    void setXCoord(int x);

    void setYCoord(int y);

    void setIcon(char c);

    void setIsOccupied(bool b);

    void setOccupiedBy(Ship* ship);

    void setOccupiedBySegment(int segment);

    void setCurrentTileStatus(tileStatus status);

    void occupyWithShip(Ship &ship);

    void setIconThroughStatus();
};

#endif //BATTLESHIPGAME_TILE_H
