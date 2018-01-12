#pragma once

#include "Grid.hpp"
#include <random>
#include <cmath>
#include "boost/random.hpp"
#include "boost/generator_iterator.hpp"

using namespace std;

/**
 * @brief Need to instance this class as a pointer because this class use std::random_device
 */

class IsingModel {

public:
    IsingModel(int s, double temperature, double MagnetisationField);

    ~IsingModel();

    double getTemperature();

    void setTemperature(double temperature);

    double getMagnetisationField();

    void setMagnetisationField(double magnetisationfield);

    /**
     * @brief Simul n iterations and save modification on the grid
     *
     * @param grid The current grid
     * @param n Number of iterations
     */
    void simul(Grid &grid, int n);

private:
    int size; /// Size of the grid
    double T; /// Temperature
    double B; /// Magnetisation field
    const double k = 1; /// Boltzmann constant
    Grid tempoGrid; /// TempoGrid used to avoid multiple instances of grid
    random_device rd;
};
