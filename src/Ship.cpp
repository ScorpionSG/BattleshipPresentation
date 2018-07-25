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

//bool Ship::creationSpaceAvailable(int width, int height, int position, int length, shipDirection direction) {
//    //FIX THIS
//    //FIX THIS
//    //FIX THIS
//    Ship testShip = Ship(width, height, position, length, direction);
//    int additionalSegments = testShip.shipLength - 1;
//    for (int i = 0; i < additionalSegments; i++) {
//        switch (direction) {
//            case UP:
//                testShip.segmentCoordinates.push_back(testShip.bowPosition + (testShip.gridWidth * (i + 1)));
//                for (int j = 0; j < occupiedCoordinates.size();j++) {
//                    if (testShip.segmentCoordinates[i + 1] == occupiedCoordinates[j]) {
//                        //Fix this trash conditional, I am tired and did not thoroughly check it.
//                        /* The idea is "If the created segment at the latest index has the same value as any value
//                         * in the list of occupied coordinates, end the test and return false.
//                         * Also look up Derek Banas and Life at Google for curiosity.
//                         */
//                        return false;
//                    }
//                }
//                break;
//            case DOWN:
//                testShip.segmentCoordinates.push_back(testShip.bowPosition - (testShip.gridWidth * (i + 1)));
//                break;
//            case LEFT:
//                testShip.segmentCoordinates.push_back(testShip.bowPosition - 1 - i);
//                break;
//            case RIGHT:
//                testShip.segmentCoordinates.push_back(testShip.bowPosition + 1 + i);
//                break;
//        }
//    }
//
//    return true;
//}
//
//void Ship::clearOccupiedCoordinateVector() {
//    occupiedCoordinates.clear();
//}

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
