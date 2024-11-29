//
// Created by stanh on 06-Nov-24.
//
#include "vector"
#include "cell.h"
#ifndef SNAKE_SNAKE_H
#define SNAKE_SNAKE_H
enum DIR{UP , RIGHT, DOWN , LEFT};
class snake {
private:
    std::vector<cell> body;
    sf::Vector2i headPos;
public:
    cell getCell(int id);
    std::vector<sf::Vector2i> getBodyPosition();
    snake(int xHeadPos , int yHeadPos , int len);
    snake(sf::Vector2i headPosition , int len);
    snake() {
    *this = snake(0 , 0 , 0);
    }
    void moveSnake(sf::Vector2i directionVector);
};


#endif //SNAKE_SNAKE_H
