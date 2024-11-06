//
// Created by stanh on 21-Oct-24.
//
#include <iostream>
#include "grid.h"

grid::grid(int HEIGHT, int WIDTH) {
    height = HEIGHT;
    width = WIDTH;
for(int x = 0;x<width;x++)
{
    cell_grid.push_back(create_column(height , x));
}
}
std::vector<mapCell> grid::create_column(int height , int x){
    std::vector<mapCell> column;
    column.reserve(height);
for(int y=0; y < height; y++)
    {
        column.emplace_back(x , y);
    }
return column;
}

void grid::printGrid() {
for(int x=0;x<width;x++)
{
    for(int y=0;y<height;y++)
    {
       std::cout<< getCell(x , y).getCellString();
    }
    std::cout<<"\n";
}
}

mapCell grid::getCell(int x , int y) {
    return cell_grid[x][y];
}
