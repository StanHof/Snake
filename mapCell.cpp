//
// Created by stanh on 21-Oct-24.
//
#include "mapCell.h"
mapCell::mapCell(int x , int y) : cell(x , y)
{

    contents = EMPTY;
}
mapCell::mapCell(std::vector<int> POSITION) : cell(POSITION)
{
contents = EMPTY;
}

std::string mapCell::getCellString() {
    std::string cellstring;
    cellstring += "[" + std::to_string(getX()) + ",";
    cellstring += std::to_string(getY()) + "]";
    return cellstring;
}

void mapCell::addApple() {
contents = APPLE;
}

void mapCell::makeWall() {
contents = WALL;
}

mapCell::cellType mapCell::getContents() {
    return contents;
}
