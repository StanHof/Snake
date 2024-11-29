//
// Created by stanh on 06-Nov-24.
//


#include "snake.h"
snake::snake(int xHeadPos, int yHeadPos, int len) {
    body.push_back(snakeCell(xHeadPos , yHeadPos  , 1));
for(int i=1;i<len;i++)
{
  body.push_back(snakeCell(xHeadPos , yHeadPos + i , 0));
}
}

snake::snake(sf::Vector2i headPosition, int len) {
    body.push_back(snakeCell(headPosition  , true));
    for(int i=1;i<len;i++)
    {
        body.push_back(snakeCell(headPosition.x , headPosition.y + i , false));
    }
}

std::vector<sf::Vector2i> snake::getBodyPosition() {
    std::vector<sf::Vector2i> pos;
    for(int i=0;i<body.size();i++)
    {
    pos.push_back(body[i].getPosition());
    }
    return pos;
}

snakeCell snake::getCell(int id) {
    return body[id];
}
