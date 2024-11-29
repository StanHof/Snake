//
// Created by stanh on 06-Nov-24.
//

#include "game.h"

game::game() {
     map = grid(10, 10);
    player = snake(map.getCenter() , 3);

}

void game::printGame() {
    player.moveSnake({-1 , 0});
    drawStrMap();
    for(int y=0;y<map.getHeight();y++)
{
    for(int x=0;x<map.getWidth();x++)
    {
        std::cout<< strMap[x][y];
    }
    std::cout<<" \n";
}
}
void game::drawStrMap()
{
    strMap.clear();
    std::vector<std::string> col;
    for(int x=0;x<map.getWidth();x++)
    {
        for(int y=0;y<map.getHeight();y++)
        {
            col.push_back(map.getCell(x , y).getCellString());
        }
        strMap.push_back(col);
        col.clear();
    }
    for(int i=0;i<player.getBodyPosition().size();i++)
    {
        strMap[player.getCell(i).getX()][player.getCell(i).getY()] = "[{ }]";
    }
}
