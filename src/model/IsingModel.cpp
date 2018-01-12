#include "IsingModel.hpp"
#include <iostream>

using namespace std;

IsingModel::IsingModel(int s, double temperature, double MagnetisationField) : tempoGrid(Grid(s)) {
    size = s;
    B = MagnetisationField;
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

double IsingModel::getMagnetisationField() {
    return B;
}

void IsingModel::setMagnetisationField(double magnetisationfield) {
    B = magnetisationfield;
}

void IsingModel::simul(Grid &grid, int n) {
    mt19937 generator(rd()); /// Mersenne Twister 19937 generator
    uniform_real_distribution<double> distribution(0.0, 1.0);
    double deltaEnergy = 0.;
    int currentSpin = 0;
    double alea = 0.;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                deltaEnergy = grid.getDeltaEnergy(i, j, B);
                currentSpin = (int) grid.getMatrix()->get(i, j);
                alea = distribution(generator);
                if (deltaEnergy < 0 || alea < exp(-deltaEnergy / (k * T))) {
                    grid.getMatrix()->set(i, j, -1 * currentSpin);
                }
            }
        }
    }
}
