#include "../src/model/MonteCarlo.hpp"
#include <iostream>

using namespace std;

int main() {

    bool success = true;

    int nMC = 200;
    int nMP = 1000;
    int size = 10;
    double temperature = 0.0;
    Grid *grid = new Grid(size);
    IsingModel *isingModel = new IsingModel(size, temperature, 0);
    MonteCarlo *monteCarlo = new MonteCarlo(nMC,nMP, isingModel, grid);

    double magnetisation = 0;
    double ic = 0;

    monteCarlo->getMagnetisation(magnetisation,ic);

    cout << "magnesitation : " << magnetisation << ", ic : " << ic << endl;

    if (success) {
        exit(0);
    } else {
        exit(1);
    }

}
