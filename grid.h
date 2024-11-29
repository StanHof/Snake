//
// Created by stanh on 21-Oct-24.
//

#include <utility>
#include <vector>
#include <iostream>
#include "mapCell.h"
#ifndef SNAKE_GRID_H
#define SNAKE_GRID_H

class grid
{
public:
    int getHeight() const;

    int getWidth() const;

    grid(int height , int width);
    grid() {
        *this = grid(10 , 10);
    }

    void printGrid();
    mapCell getCell(int x, int y);
    sf::Vector2i getCenter();
private:
   std::vector<std::vector<mapCell>> cell_grid;
   int height;
   int width;

};




#endif //SNAKE_GRID_H
