#include "../src/model/Grid.hpp"
#include <iostream>

using namespace std;

int main() {

    Grid grid = Grid(10);

    bool success = true;

    if (grid.getSize() != 10) {
        success = false;
        cerr << "Error on getSize()" << endl;
    }

    if (grid.getMagnetisation() != 0) {
        success = false;
        cerr << "Error on getMagnetisation()" << endl;
    }

    if (abs((int) grid.getDeltaEnergy(0, 0)) > 4) {
        success = false;
        cerr << "Error on getDeltaEnergy()" << endl;
    }

    Grid grid2 = Grid(10);
    grid2.getMatrix()->setAll(2);

    grid = grid2;

    if (grid != grid2) {
        success = false;
        cerr << "Error on grid2 = grid1 (grid affectation)" << endl;
    } else if (*(grid.getMatrix()) != *(grid2.getMatrix())) {
        success = false;
        cerr << "Error on grid2 = grid1 (matrix affectation)" << endl;
    }

    grid2.getMatrix()->set(0,0,100);
    if (grid.getMatrix()->get(0,0) == 100) {
        success = false;
        cerr << "Error on the pointer management" << endl;
    }

    if (success) {
        exit(0);
    } else {
        exit(1);
    }

}
