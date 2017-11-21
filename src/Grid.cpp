#include "Grid.hpp"

Grid::Grid(int s) : size(s), matrix(Matrix(s,s,0)) {}

Grid::~Grid() {}

int Grid::getSize() {
    return size;
}

Matrix Grid::getGrid() {
    return matrix;
}

double Grid::getMagnetisation() {
    double magnetisation = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            magnetisation += matrix.GET(i,j);

        }
    }
    magnetisation /= (size * size);
    return magnetisation;
}
