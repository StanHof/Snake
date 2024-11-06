//
// Created by stanh on 21-Oct-24.
//

#include <utility>
#include <vector>
#include "mapCell.h"
#ifndef SNAKE_GRID_H
#define SNAKE_GRID_H

class grid
{
public:
    grid(int height , int width);
    void printGrid();
    mapCell getCell(int x, int y);
private:

   std::vector<std::vector<mapCell>> cell_grid;
   int height;
   int width;
   std::vector<mapCell> create_column(int height, int x);


};




#endif //SNAKE_GRID_H
