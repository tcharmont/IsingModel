#include "Grid.hpp"

Grid::Grid(int s) : size(s), matrix(new Matrix(s, s, 0)) {}

Grid::~Grid() {
    delete matrix;
}

int Grid::getSize() {
    return size;
}

const int Grid::getSize() const {
    return size;
}

Matrix *Grid::getMatrix() {
    return matrix;
}

const Matrix *Grid::getMatrix() const {
    return matrix;
}

void Grid::resetGrid() {
    matrix->setAll(0);
}

double Grid::getMagnetisation() {
    double magnetisation = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            magnetisation += matrix->get(i, j);
        }
    }
    magnetisation /= (size * size);
    return magnetisation;
}

double Grid::getTotalSpin() {
    double totalSpin = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            totalSpin += matrix->get(i, j);

        }
    }
    return totalSpin;
}

double Grid::getDeltaEnergy(int i, int j) {
    double energy = 0;
    double spinIJ = matrix->get(i, j);
    double currentSpin = 0;

    currentSpin = matrix->get((i - 1 + size) % size, j);
    energy += spinIJ * currentSpin;

    currentSpin = matrix->get((i + 1 + size) % size, j);
    energy += spinIJ * currentSpin;

    currentSpin = matrix->get(i, (j + 1 + size) % size);
    energy += spinIJ * currentSpin;

    currentSpin = matrix->get(i, (j - 1 + size) % size);
    energy += spinIJ * currentSpin;

    return 2*energy;

}

Grid &Grid::operator=(const Grid &grid) {
    *matrix = *(grid.matrix);
    //matrix = grid.matrix;
    size = grid.size;
    return *this;
}

bool Grid::operator==(const Grid &grid) {
    Grid &gCurrent = *this;
    if (grid.getSize() != gCurrent.getSize()) {
        return false;
    }
    return gCurrent.getMatrix() == grid.getMatrix();
}

bool Grid::operator!=(const Grid &grid) {
    Grid &gCurrent = *this;
    if (grid.getSize() == gCurrent.getSize()) {

        return *(gCurrent.getMatrix()) != *(grid.getMatrix());
    }
    return true;
}

std::ostream &operator<<(std::ostream &out, const Grid &g) {
  out << *(g.getMatrix());
    return out;
}
