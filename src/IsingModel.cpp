#include "IsingModel.hpp"
#include <iostream>

using namespace std;

IsingModel::IsingModel(int s, double temperature) : tempoGrid(Grid(s)) {
    size = s;
    if (temperature < 0) {
        std::cerr << "Invalid temperature" << std::endl;
        T = 0;
    } else {
        T = temperature;
    }
}

IsingModel::~IsingModel() {}

double IsingModel::getTemperature() {
    return T;
}

void IsingModel::setTemperature(double temperature) {
    if (temperature < 0) {
        std::cerr << "Invalid temperature" << std::endl;
    } else {
        T = temperature;
    }
}

void IsingModel::simul(Grid &grid) {
    mt19937 generator(rd()); /// Mersenne Twister 19937 generator
    uniform_real_distribution<double> distribution(0.0, 1.0);
    double localEnergy = 0;
    double currentSpin = 0;
    double alea = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            localEnergy = grid.getLocalEnergy(i, j);
            currentSpin = grid.getMatrix()->get(i, j);
            if (localEnergy < 0) {
                tempoGrid.getMatrix()->set(i, j, -currentSpin);
                //cout << "inversion energie négative" << endl;
            } else {
                alea = distribution(generator);
                if (alea < exp(localEnergy / (k * T))) {
                    tempoGrid.getMatrix()->set(i, j, -currentSpin);
                    //cout << "inversion alea" << endl;
                }
            }
        }
    }
    grid = tempoGrid;
}
