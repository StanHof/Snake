//
// Created by stanh on 06-Nov-24.
//

#ifndef SNAKE_CELL_H
#define SNAKE_CELL_H


#include <string>
#include <vector>
#include <SFML/Graphics.hpp>
class cell {

private:


protected:
    sf::Vector2i  position;
public:
    const sf::Vector2i &getPosition() const;
    const int& getX();
    const int& getY();
    explicit cell(sf::Vector2i POSITION);
    cell(int x, int y);
};


#endif //SNAKE_CELL_H
