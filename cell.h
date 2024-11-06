//
// Created by stanh on 06-Nov-24.
//

#ifndef SNAKE_CELL_H
#define SNAKE_CELL_H


#include <string>
#include <vector>

class cell {

private:


protected:
    std::vector<int> position;
public:
    int getX();
    int getY();
    explicit cell(std::vector<int> POSITION);
    cell(int x, int y);
};


#endif //SNAKE_CELL_H
