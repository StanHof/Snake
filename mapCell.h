//
// Created by stanh on 21-Oct-24.
//
#include <string>
#include "vector"
#ifndef SNAKE_MAPCELL_H
#define SNAKE_MAPCELL_H

#endif //SNAKE_MAPCELL_H
class mapCell
{

private:
    enum cellType{EMPTY , WALL , APPLE};
    std::vector<int> position;
    int getX();
    int getY();
    cellType contents;
public:
    explicit mapCell(std::vector<int> POSITION);
    mapCell(int x, int y);
    std::string getCellString();
    cellType getContents();
    void addApple();
    void makeWall();
};
