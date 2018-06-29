//
// Created by Ali Elnour on 6/26/18.
//

#ifndef BATTLESHIPGAME_TILE_H
#define BATTLESHIPGAME_TILE_H


class Tile {
private:
    int xCoord, yCoord;
    char icon;
public:
    Tile();

    Tile(int x, int y);

    int getXCoord();

    int getYCoord();

    char getIcon();

    void setXCoord(int x);

    void setYCoord(int y);

    void setIcon(char c);
};

#endif //BATTLESHIPGAME_TILE_H
