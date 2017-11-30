#include "MonteCarlo.hpp"

MonteCarlo::MonteCarlo(int nMC, int nMP, IsingModel *model, Grid *g) {
    nbSampleMC = nMC;
    nbSambleMP = nMP;
    isingModel = model;
    grid = g;
}

MonteCarlo::~MonteCarlo() {}

void MonteCarlo::getMagnetisation(double &magnetisation, double &ic) {
    double sum = 0;
    double squareSum = 0;
    double tempoMagnet = 0;
    for (int i = 0; i < nbSampleMC; i++) {
        grid->getMatrix()->fillRandomly();
        isingModel->simul(*grid, nbSambleMP);
        tempoMagnet = grid->getMagnetisation();
        sum += tempoMagnet;
        squareSum += pow(tempoMagnet, 2);
    }
    sum /= nbSampleMC;
    squareSum /= nbSampleMC;

    magnetisation = sum;
    ic = 1.96 * sqrt(squareSum - pow(sum,2))/sqrt(nbSampleMC);
}