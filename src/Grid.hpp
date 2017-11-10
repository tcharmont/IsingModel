#pragma once

#include "pnl/pnl_matrix.h"

class Grid {

public:
Grid(int size);
~Grid();
int getSize();
double getMagnetisation();
PnlMat* getGrid();

private:
int size;
PnlMat *grid;

};
