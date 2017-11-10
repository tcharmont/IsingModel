#pragma once

#include "pnl/pnl_matrix.h"

class Grid {

public:
  Grid(int size);
  ~Grid();
  int getSize();

private:
int size;
PnlMat grid;

};
