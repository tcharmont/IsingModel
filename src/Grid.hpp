#pragma once

#include "Matrix.hpp"

class Grid {

public:
    Grid(int s);

    ~Grid();

    int getSize();

    double getMagnetisation();

    Matrix getGrid();

private:
    int size;
    Matrix matrix;

};
