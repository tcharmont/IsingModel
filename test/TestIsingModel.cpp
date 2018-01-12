#include "../src/model/IsingModel.hpp"
#include <iostream>

using namespace std;

int main() {

    int size = 10;
    double temperature = 2;
    Grid grid = Grid(size);
    IsingModel *isingModel = new IsingModel(size, temperature, 0.5);

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

    if (isingModel->getMagnetisationField() != 0.5) {
        success = false;
        cerr << "Error with getMagnetisationField()" << endl;
    }

    isingModel->setMagnetisationField(0);
    if (isingModel->getMagnetisationField() != 0) {
        success = false;
        cerr << "Error with setMagnetisationField()" << endl;
    }

    grid.getMatrix()->setAll(1);
    isingModel->setTemperature(0.1);
    isingModel->simul(grid, 200);
    double magnetisation = grid.getMagnetisation();
    if (magnetisation < 0.98) {
        success = false;
        cerr << "Error on the expected value (1) and current result: " << magnetisation << " with simul(grid,n)"
             << endl;
    }

    if (success) {
        exit(0);
    } else {
        exit(1);
    }

}
