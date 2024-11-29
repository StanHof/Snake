//
// Created by stanh on 21-Oct-24.
//
#include <iostream>
#include "grid.h"

grid::grid(int WIDTH, int HEIGHT) {
    height = HEIGHT;
    width = WIDTH;
for(int x = 0;x<width;x++)
{
    cell_grid.push_back(std::vector<mapCell>());
    for(int y = 0;y<height;y++)
    {
        cell_grid[x].push_back(mapCell(x , y));
    }
}
}

void grid::printGrid() {
    for(int y=0;y<height;y++){
        for(int x=0;x<width;x++){
       std::cout<< getCell(x , y).getCellString();
    }
    std::cout<<"\n";
}
}

mapCell grid::getCell(int x , int y) {
    return cell_grid[x][y];
}
sf::Vector2i grid::getCenter()
{
    return {height/2 , width/2};
}

int grid::getHeight() const {
    return height;
}

int grid::getWidth() const {
    return width;
}
