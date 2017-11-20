#include "Grid.hpp"

Grid::Grid(int size) : size(size) {
    this->grid = new Matrix(size,size);
}

Grid::~Grid() {
    delete grid;
}

int Grid::getSize() {
    return size;
}

Matrix *Grid::getGrid() {
    return grid;
}

double Grid::getMagnetisation() {
    double magnetisation = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            magnetisation += 1;//grid->operator()(i,j);//grid(i,j);

        }
    }
    magnetisation /= (size * size);
    return magnetisation;
}
