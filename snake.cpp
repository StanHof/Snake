//
// Created by stanh on 06-Nov-24.
//


#include <iostream>
#include "snake.h"
snake::snake(int xHeadPos, int yHeadPos, int len) {

for(int i=0;i<len;i++)
{
  body.push_back(cell(xHeadPos , yHeadPos + i));
}
    headPos = {xHeadPos , yHeadPos};

}

snake::snake(sf::Vector2i headPosition, int len) {

    for(int i=0;i<len;i++)
    {
        body.push_back(cell(headPosition.x , headPosition.y + i ));
    }
    headPos = headPosition;
}

std::vector<sf::Vector2i> snake::getBodyPosition() {
    std::vector<sf::Vector2i> pos;
    for(int i=0;i<body.size();i++)
    {
    pos.push_back(body[i].getPosition());
    }
    return pos;
}

cell snake::getCell(int id) {
    return body[id];
}

void snake::moveSnake(sf::Vector2i directionVector) {
    body.pop_back();
body.insert(body.begin(), cell((headPos + directionVector)));
headPos = body.begin()->getPosition();
}
