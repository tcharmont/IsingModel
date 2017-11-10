#include "Grid.hpp"

Grid::Grid(int size) : size(size) {
  grid = pnl_mat_create(size,size);
}
