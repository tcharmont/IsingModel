#include <cmath>
#include "interface/matplotlibcpp.hpp"
#include "model/MonteCarlo.hpp"
#include "omp.h"
#include <iostream>

namespace plt = matplotlibcpp;

int main(int argc, char *argv[]) {

    double begin, end;
    begin = omp_get_wtime();

    int nMC = 50;
    int nMP = 100;
    int size = 10;
    double temperature = 0.1;
    Grid *grid = new Grid(size);
    IsingModel *isingModel = new IsingModel(size, temperature, 0);
    MonteCarlo *monteCarlo = new MonteCarlo(nMC, nMP, isingModel, grid);

    double magnetisation = 0;
    double ic = 0;

    double temperatureMax = 5;
    int nbStep = 20;
    double temperatureStep = temperatureMax / nbStep;

    if (std::string(argv[1]) != "--parallel") {
        std::vector<double> x, y, icmin, icmax;
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
    } else {
        std::vector<double> x(nbStep), y(nbStep), icmin(nbStep), icmax(nbStep);
#pragma omp parallel for
        for (int i = 0; i < nbStep; i++) {
            isingModel->setTemperature((i + 1) * temperatureStep);
            monteCarlo->getMagnetisation(magnetisation, ic);
            x[i] = (i + 1) * temperatureStep;
            y[i] = magnetisation;
            icmin[i] = magnetisation - ic;
            icmax[i] = magnetisation + ic;
            cout << "itération: " << i+1 << " / " << nbStep << endl;
        }
        plt::plot(x, y);
        plt::plot(x, icmin, "r--");
        plt::plot(x, icmax, "r--");
        plt::xlim(0, (int) (temperatureMax));
        plt::xlabel("Temperature (K)");
        plt::ylabel("Magnetisation");
        plt::title("M = (T, B)");
    }

    end = omp_get_wtime();
    cout << "Real time : " << end - begin << " s" << endl;

    plt::save("./view.png");
    plt::show();

}