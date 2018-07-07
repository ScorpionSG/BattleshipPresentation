//
// Created by Ali Elnour on 7/3/18.
//

#include "../include/Ship.h"

Ship::Ship() {
    shipID = 0;
    bowPosition = 0;
    shipLength = 1;
    currentShipDirection = RIGHT;
}

Ship::Ship(int width, int height, int position, int length, shipDirection direction) {
    gridWidth = width;
    gridHeight = height;
    //totalShips++;
    //shipID = totalShips;
    bowPosition = position;
    segmentCoordinates.push_back(position);
    shipLength = length;
    currentShipDirection = direction;
}

int Ship::getID() {
    return shipID;
}

int Ship::getShipLength() {
    return shipLength;
}

int Ship::getSegmentCoordinatesAtIndex(int index) {
    return segmentCoordinates[index];
}

bool Ship::creationPossible(int additionalSegments, Ship::shipDirection direction) {
    bool possible = false;
    switch (direction) {
        case UP:
            if (bowPosition + (additionalSegments * gridWidth) <= gridWidth * gridHeight) {
                possible = true;
            }
            break;
        case DOWN:
            if (bowPosition - (additionalSegments * gridWidth) >= 0) {
                possible = true;
            }
            break;
        case LEFT:
            if ((bowPosition % gridWidth) - additionalSegments >= 0) {
                possible = true;
            }
            break;
        case RIGHT:
            if ((bowPosition % gridWidth) + additionalSegments <= gridWidth) {
                possible = true;
            }
            break;
    }
    return possible;
}

void Ship::setID(int ID) {
    shipID = ID;
}

void Ship::setShipLength(int length) {
    shipLength = length;
}

void Ship::createSegment(int additionalSegments, Ship::shipDirection direction) {
    for (int i = 0; i < additionalSegments; i++) {
        switch (direction) {
            case UP:
                segmentCoordinates.push_back(bowPosition + gridWidth);
                break;
            case DOWN:
                segmentCoordinates.push_back(bowPosition - gridWidth);
                break;
            case LEFT:
                segmentCoordinates.push_back(bowPosition - 1);
                break;
            case RIGHT:
                segmentCoordinates.push_back(bowPosition + 1);
                break;
        }
    }
}
