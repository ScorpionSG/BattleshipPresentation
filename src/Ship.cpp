//
// Created by Ali Elnour on 7/3/18.
//

#include "../include/Ship.h"

Ship::Ship() {
    bowPosition = 0;
    shipLength = 1;
    currentShipDirection = RIGHT;
}

Ship::Ship(int width, int height, int position, int length, shipDirection direction) {
    shipLength = length;
    gridWidth = width;
    gridHeight = height;
    bowPosition = position;
    segmentCoordinates.push_back(position);
    currentShipDirection = direction;
}

int Ship::getShipLength() {
    return shipLength;
}

int Ship::getSegmentCoordinatesAtIndex(int index) {
    return segmentCoordinates[index];
}

bool Ship::creationPossible(int width, int height, int position, int length, shipDirection direction) {
    int additionalSegments = length - 1;
    bool possible = false;
    switch (direction) {
        case UP:
            if (position + (additionalSegments * width) <= width * height) {
                possible = true;
            }
            break;
        case DOWN:
            if (position - (additionalSegments * width) >= 0) {
                possible = true;
            }
            break;
        case LEFT:
            if ((position % width) - additionalSegments >= 0) {
                possible = true;
            }
            break;
        case RIGHT:
            if ((position % width) + additionalSegments <= width) {
                possible = true;
            }
            break;
    }
    return possible;
}

void Ship::setShipLength(int length) {
    shipLength = length;
}

void Ship::createSegment(Ship::shipDirection direction) {
    int additionalSegments = shipLength - 1;
    for (int i = 0; i < additionalSegments; i++) {
        switch (direction) {
            case UP:
                segmentCoordinates.push_back(bowPosition + (gridWidth * (i + 1)));
                break;
            case DOWN:
                segmentCoordinates.push_back(bowPosition - (gridWidth * (i + 1)));
                break;
            case LEFT:
                segmentCoordinates.push_back(bowPosition - 1 - i);
                break;
            case RIGHT:
                segmentCoordinates.push_back(bowPosition + 1 + i);
                break;
        }
    }
}
