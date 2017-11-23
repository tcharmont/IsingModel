#include "../src/Grid.hpp"
#include <iostream>

using namespace std;

int main() {

    Grid *grid = new Grid(10);

    bool success = true;

    if (grid->getSize() != 10) {
        success = false;
        cerr << "Erreur sur la getSize()" << endl;
    }

    if (grid->getMagnetisation() != 0) {
        success = false;
        cerr << "Erreur sur getMagnetisation()" << endl;
    }

    if (abs((int) grid->getLocalEnergy(0, 0)) > 4) {
        success = false;
        cerr << "Erreur sur getLocalEnergy()" << endl;
    }

    if (success) {
        exit(0);
    } else {
        exit(1);
    }

}
