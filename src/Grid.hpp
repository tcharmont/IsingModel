#pragma once

#include "Matrix.hpp"

class Grid {

public:
    Grid(int s);

    ~Grid();

    int getSize();

    /**
     * Get the grid magnetisation
     *
     * @return The grid magnetisation
     */
    double getMagnetisation();

    Matrix *getMatrix();

    void resetGrid();

    /**
     * Get the neighbours energy of the spin(i,j)
     *
     * @param i X position
     * @param j Y position
     * @return The local energy
     */
    double getLocalEnergy(int i, int j);

private:
    int size;
    Matrix *matrix;

};
