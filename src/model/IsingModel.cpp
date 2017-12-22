#include "IsingModel.hpp"

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

void IsingModel::simul(Grid &grid) {
    mt19937 generator(rd()); /// Mersenne Twister 19937 generator
    uniform_real_distribution<double> distribution(0.0, 1.0);
    double localEnergy = 0;
    int currentSpin = 0;
    double alea = 0;
    tempoGrid = grid;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            localEnergy = grid.getDeltaEnergy(i, j);// - grid.getTotalSpin() * B;
            currentSpin = (int) grid.getMatrix()->get(i, j);
            if (localEnergy < 0) {
                tempoGrid.getMatrix()->set(i, j, -currentSpin);
            } else {
                alea = distribution(generator);
                if (alea < exp(-localEnergy / (k * T))) {
                    tempoGrid.getMatrix()->set(i, j, -currentSpin);
                }
            }
        }
    }
    grid = tempoGrid;
}

void IsingModel::simul(Grid &grid, int n) {
    for (int i = 0; i < n; i++) {
        simul(grid);
    }
}
