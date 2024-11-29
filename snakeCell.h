//
// Created by stanh on 06-Nov-24.
//

#ifndef SNAKE_SNAKECELL_H
#define SNAKE_SNAKECELL_H

#include "snakeCell.h"
#include "cell.h"

class snakeCell : public cell {
private:
    bool isHead;
public:
    snakeCell(sf::Vector2i POSITION);
    snakeCell(int x , int y, bool isHead);
    snakeCell(const sf::Vector2i &position, bool isHead);
};


#endif //SNAKE_SNAKECELL_H
