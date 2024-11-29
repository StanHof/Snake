//
// Created by stanh on 06-Nov-24.
//

#include "snakeCell.h"

snakeCell::snakeCell(sf::Vector2i POSITION) : cell(POSITION) {

}

snakeCell::snakeCell(const sf::Vector2i &position, bool ISHEAD) : cell(position), isHead(ISHEAD) {

}

snakeCell::snakeCell(int x, int y, bool ISHEAD) : cell(x, y) , isHead(ISHEAD) {

}
