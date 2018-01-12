#pragma once

#include "IsingModel.hpp"
#include "Grid.hpp"

/**
 * @brief Class to manage the Monte Carlo simulation
 */

class MonteCarlo {
public:
    MonteCarlo(int nMC, int nMP, IsingModel *model, Grid *g);

    ~MonteCarlo();

    void getMagnetisation(double &magnetisation, double &ic);

    void getEnergy(double &energy, double &ic);

private:
    int nbSampleMC; /// Number of iterations of MonteCarlo
    int nbSambleMP; /// Number of iterations of Metropolis
    IsingModel *isingModel; /// The Ising Model
    Grid *grid; /// The grid
};
