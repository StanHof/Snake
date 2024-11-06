//
// Created by stanh on 21-Oct-24.
//
#include <string>
#include "vector"
#include "cell.h"
#ifndef SNAKE_MAPCELL_H
#define SNAKE_MAPCELL_H

#endif //SNAKE_MAPCELL_H
class mapCell: public cell
{

private:
    enum cellType{EMPTY , WALL , APPLE};
    cellType contents;
public:
    explicit mapCell(std::vector<int> POSITION);
    mapCell(int x, int y);
    std::string getCellString();
    cellType getContents();
    void addApple();
    void makeWall();

};
