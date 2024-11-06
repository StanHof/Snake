//
// Created by stanh on 06-Nov-24.
//

#include "cell.h"

#include <utility>

cell::cell(int x, int y) {
    position.push_back(x);
    position.push_back(y);
}
int cell::getX()
{
    return position[0];
}
int cell::getY()
{
    return position[1];
}

cell::cell(std::vector<int> POSITION) {
position = std::move(POSITION);
}
