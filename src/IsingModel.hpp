#pragma once

#include "Grid.hpp"
#include <random>
#include <cmath>

using namespace std;

class IsingModel {

public:
    IsingModel(int s, double temperature);

    ~IsingModel();

    double getTemperature();

    void setTemperature(double temperature);

    /**
     * Simul one iteration and save modification on the grid
     *
     * @param grid The current grid
     */
    void simul(Grid &grid);

    /**
     * Simul n iterations and save modification on the grid
     *
     * @param grid The current grid
     * @param n Number of iterations
     */
    void simul(Grid &grid, int n);

private:
    int size; /// Size of the grid
    double T; /// Temperature
    const double k = 1; //1.38064852 * pow(10, -23); /// Boltzmann constant
    Grid tempoGrid; /// TempoGrid used to avoid multiple instances of grid
    random_device rd;

};
