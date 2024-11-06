//
// Created by stanh on 21-Oct-24.
//
#include "mapCell.h"
mapCell::mapCell(int x , int y)
{
    position.push_back(x);
    position.push_back(y);
    contents = EMPTY;
}
mapCell::mapCell(std::vector<int> POSITION)
{
    position = std::move(POSITION);
}

std::string mapCell::getCellString() {
    std::string cellstring;
    cellstring += "[" + std::to_string(getX()) + ",";
    cellstring += std::to_string(getY()) + "]";
    return cellstring;
}
int mapCell::getX()
{
    return position[0];
}
int mapCell::getY()
{
    return position[1];
}

void mapCell::addApple() {
contents = APPLE;
}

void mapCell::makeWall() {
contents = WALL;
}
