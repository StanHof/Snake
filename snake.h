//
// Created by stanh on 06-Nov-24.
//
#include "vector"
#include "snakeCell.h"
#ifndef SNAKE_SNAKE_H
#define SNAKE_SNAKE_H


class snake {
private:
    std::vector<snakeCell> body;
public:
    snakeCell getCell(int id);
    std::vector<sf::Vector2i> getBodyPosition();
    snake(int xHeadPos , int yHeadPos , int len);
    snake(sf::Vector2i headPosition , int len);
    snake() {
    *this = snake(0 , 0 , 0);
    }

};


#endif //SNAKE_SNAKE_H
