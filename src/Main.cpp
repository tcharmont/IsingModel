#include <cmath>
#include "interface/matplotlibcpp.hpp"
#include "model/MonteCarlo.hpp"


namespace plt = matplotlibcpp;

int main() {

    int nMC = 100;
    int nMP = 100;
    int size = 10;
    double temperature = 0.0;
    Grid *grid = new Grid(size);
    IsingModel *isingModel = new IsingModel(size, temperature);
    MonteCarlo *monteCarlo = new MonteCarlo(nMC, nMP, isingModel, grid);

    double magnetisation = 0;
    double ic = 0;

    int n = 10;
    std::vector<double> x(n), y(n), icmin(n), icmax(n);
    for (int i = 0; i < n; ++i) {
        isingModel->setTemperature(i);
        monteCarlo->getMagnetisation(magnetisation, ic);
        x.at(i) = i;
        y.at(i) = magnetisation;
        icmin.at(i) = magnetisation - ic;
        icmax.at(i) = magnetisation + ic;
    }

    // Plot line from given x and y data. Color is selected automatically.
    plt::plot(x, y);
    // Plot a red dashed line from given x and y data.
    plt::plot(x, icmin, "r--");
    // Plot a line whose name will show up as "log(x)" in the legend.
    plt::plot(x, icmax, "r--");

    // Set x-axis to interval [0,1000000]
    plt::xlim(0, n);

    // Add graph title
    plt::title("M = (T)");
    // Enable legend.
    plt::legend();
    // save figure
    plt::save("./basic.png");
    // show figure
    plt::show();

}