//
// Created by stanh on 06-Nov-24.
//
#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H

#include "snake.h"
#include "grid.h"


class game {


    grid map;
snake player;
std::vector<std::vector<std::string>> strMap;
public:
    game();
    void printGame();

    void drawStrMap();
};


#endif //SNAKE_GAME_H
