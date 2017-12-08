#include "MonteCarlo.hpp"

MonteCarlo::MonteCarlo(int nMC, int nMP, IsingModel *model, Grid *g) {
    nbSampleMC = nMC;
    nbSambleMP = nMP;
    isingModel = model;
    grid = g;
}

MonteCarlo::~MonteCarlo() {
  delete isingModel;
  delete grid;
}

void MonteCarlo::getMagnetisation(double &magnetisation, double &ic) {
    double sum = 0;
    double squareSum = 0;
    double tempoMagnet = 0;
    for (int i = 0; i < nbSampleMC; i++) {
        grid->getMatrix()->setAll(1);
        isingModel->simul(*grid, nbSambleMP);
        tempoMagnet = grid->getMagnetisation();
        sum += tempoMagnet;
        squareSum += tempoMagnet * tempoMagnet;
    }
    sum /= nbSampleMC;
    squareSum /= nbSampleMC;

    magnetisation = sum;
    ic = 1.96 * sqrt(squareSum - sum * sum) / sqrt(nbSampleMC);
}
