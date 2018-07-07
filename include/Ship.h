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
    //static int totalShips;
    int gridWidth;
    int gridHeight;
    int bowPosition;
    int shipID = 0;
    int shipLength;
    std::vector<int> segmentCoordinates;
    shipDirection currentShipDirection;
public:
    Ship();

    Ship(int width, int height, int position, int length, shipDirection direction);

    int getID();

    int getShipLength();

    int getSegmentCoordinatesAtIndex(int index);

    bool creationPossible(int additionalSegments, shipDirection direction);

    void setID(int ID);

    void setShipLength(int length);

    void createSegment(int additionalSegments, shipDirection direction);
};


#endif //BATTLESHIPGAME_SHIP_H
