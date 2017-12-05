#include <cmath>
#include "interface/matplotlibcpp.hpp"
#include "model/MonteCarlo.hpp"
#include "omp.h"


namespace plt = matplotlibcpp;

int main() {

    double begin, end;
    begin = omp_get_wtime();

    int nMC = 200;
    int nMP = 200;
    int size = 10;
    double temperature = 0.1;
    Grid *grid = new Grid(size);
    IsingModel *isingModel = new IsingModel(size, temperature, 0);
    MonteCarlo *monteCarlo = new MonteCarlo(nMC, nMP, isingModel, grid);

    double magnetisation = 0;
    double ic = 0;

    double temperatureMax = 5;
    int nbStep = 40;
    double temperatureStep = temperatureMax/nbStep;
    //std::vector<double> x(n), y(n), icmin(n), icmax(n);
    std::vector<double> x, y, icmin, icmax;
//#pragma omp parallel for
    for (int i = 1; i < nbStep; i++) {
        isingModel->setTemperature(i * temperatureStep);
        monteCarlo->getMagnetisation(magnetisation, ic);
        x.push_back(i * temperatureStep);
        y.push_back(magnetisation);
        icmin.push_back(magnetisation - ic);
        icmax.push_back(magnetisation + ic);

        plt::clf();
        plt::plot(x, y);
        plt::plot(x, icmin, "r--");
        plt::plot(x, icmax, "r--");
        plt::xlim(0, (int) (temperatureMax));
        plt::xlabel("Temperature (K)");
        plt::ylabel("Magnetisation");
        plt::title("M = (T, B)");

        plt::pause(0.01);

    }

    end = omp_get_wtime();
    cout << "Real time : " << end - begin << " s" << endl;

    plt::save("./view.png");
    plt::show();

}