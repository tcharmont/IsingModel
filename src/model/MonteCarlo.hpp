#pragma once

#include "IsingModel.hpp"
#include "Grid.hpp"

class MonteCarlo {
public:
    MonteCarlo(int nMC, int nMP, IsingModel *model, Grid *g);

    ~MonteCarlo();

    void getMagnetisation(double &magnetisation, double &ic);

private:
    int nbSampleMC; /// number of iterations of MonteCarlo
    int nbSambleMP; /// number of iterations of Metropolis
    IsingModel *isingModel;
    Grid *grid;
};
