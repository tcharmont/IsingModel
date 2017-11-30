#include "../src/model/IsingModel.hpp"
#include <iostream>

using namespace std;

int main() {

    int size = 10;
    double temperature = 2;
    Grid grid = Grid(size);
    IsingModel *isingModel = new IsingModel(size, temperature);

    bool success = true;

    if (isingModel->getTemperature() != 2) {
        success = false;
        cerr << "Error with getTemperature()" << endl;
    }

    isingModel->setTemperature(3);

    if (isingModel->getTemperature() != 3) {
        success = false;
        cerr << "Error with setTemperature()" << endl;
    }

    grid.getMatrix()->fillRandomly();

    Grid beforeGrid = Grid(size);
    beforeGrid = grid;

    cout << "*** Before simulation ***" << endl;
    grid.getMatrix()->display(cout);
    cout << "Magnetisation : " << grid.getMagnetisation() << endl;

    isingModel->setTemperature(0.1);
    for (int i = 0; i<1; i++) {
        isingModel->simul(grid);
    }
    isingModel->simul(grid);

    cout << "*** After simulation ***" << endl;

    grid.getMatrix()->display(cout);
    cout << "Magnetisation : " << grid.getMagnetisation() << endl;

    if (success) {
        exit(0);
    } else {
        exit(1);
    }

}
