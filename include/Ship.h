//
// Created by Ali Elnour on 7/3/18.
//

#ifndef BATTLESHIPGAME_SHIP_H
#define BATTLESHIPGAME_SHIP_H

#include <vector>

class Ship {
public:
    enum shipDirection { UP, DOWN, LEFT, RIGHT };
private:
    int gridWidth;
    int gridHeight;
    int bowPosition;
    int shipLength;
    std::vector<int> segmentCoordinates;
    shipDirection currentShipDirection;
public:
    Ship();

    Ship(int width, int height, int position, int length, shipDirection direction);

    int getShipLength();

    int getSegmentCoordinatesAtIndex(int index);

    static bool creationPossible(int width, int height, int position, int length, shipDirection direction);

    void setShipLength(int length);

    void createSegment(shipDirection direction);
};


#endif //BATTLESHIPGAME_SHIP_H
