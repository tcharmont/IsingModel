#include "Grid.hpp"

Grid::Grid(int size) : size(size) {
  this->grid = pnl_mat_create_from_zero(size,size);
}

int Grid::getSize() {
  return size;
}

PnlMat* Grid::getGrid() {
  return grid;
}

double Grid::getMagnetisation() {
  double magnetisation = 0;
  for (int i = 0; i<size; i++) {
    for (int j = 0; j<size; j++) {
      magnetisation += MGET(grid,i,j);

    }
  }
  magnetisation /= (size*size);
  return magnetisation;
}
