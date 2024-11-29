//
// Created by stanh on 06-Nov-24.
//

#include "cell.h"

#include <utility>

cell::cell(int x, int y) {
    position.x = x;
    position.y = y;
}
const int & cell::getX()
{
    return position.x;
}
const int & cell::getY()
{
    return position.y;
}

cell::cell(sf::Vector2i POSITION) : position(POSITION){

}

const sf::Vector2i &cell::getPosition() const {
    return position;
}
