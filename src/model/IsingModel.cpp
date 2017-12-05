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
    //boost::uniform_real<> uniformReal(0.0, 1.0);
    //boost::variate_generator<RNGType, boost::uniform_real<> > dice(rng, uniformReal);
    double localEnergy = 0;
    double currentSpin = 0;
    double alea = 0;
    tempoGrid = grid;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            localEnergy = grid.getLocalEnergy(i, j) - grid.getTotalSpin() * B;
            currentSpin = grid.getMatrix()->get(i, j);
            //cout << currentSpin << endl;
            if (localEnergy < 0) {
                tempoGrid.getMatrix()->set(i, j, -currentSpin);
                //cout << "inversion energie négative" << endl;
            } else {
                alea = distribution(generator);
                //cout << "inversion alea : " << alea << " | compare to :" << exp(-localEnergy / (k * T)) << endl;
                //tempoGrid.getMatrix()->set(i, j, currentSpin);
                if (alea < exp(-localEnergy / (k * T))) {
                    tempoGrid.getMatrix()->set(i, j, -currentSpin);
                    //cout << "inversion alea" << endl;
                }
            }
            //cout << tempoGrid.getMatrix()->get(i,j) << endl;
        }
    }
    grid = tempoGrid;
}

void IsingModel::simul(Grid &grid, int n) {
    for (int i = 0; i < n; i++) {
        simul(grid);
    }
}