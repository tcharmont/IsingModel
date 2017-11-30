#include <cmath>
#include "interface/matplotlibcpp.hpp"
#include "model/MonteCarlo.hpp"
#include "omp.h"


namespace plt = matplotlibcpp;

int main() {

    double begin, end;
    begin = omp_get_wtime();

    int nMC = 100;
    int nMP = 150;
    int size = 10;
    double temperature = 0.1;
    Grid *grid = new Grid(size);
    IsingModel *isingModel = new IsingModel(size, temperature);
    MonteCarlo *monteCarlo = new MonteCarlo(nMC, nMP, isingModel, grid);

    double magnetisation = 0;
    double ic = 0;

    int n = 50;
    //std::vector<double> x(n), y(n), icmin(n), icmax(n);
    std::vector<double> x, y, icmin, icmax;
//#pragma omp parallel for
    for (int i = 0; i < n; i++) {
        isingModel->setTemperature(i * 0.1);
        monteCarlo->getMagnetisation(magnetisation, ic);
        x.push_back(i * 0.1);
        y.push_back(magnetisation);
        icmin.push_back(magnetisation - ic);
        icmax.push_back(magnetisation + ic);

        plt::clf();
        plt::plot(x, y);
        plt::plot(x, icmin, "r--");
        plt::plot(x, icmax, "r--");
        plt::xlim(0, (int) (n * 0.1));
        plt::xlabel("Temperature (K)");
        plt::ylabel("Magnetisation");
        plt::title("M = (T)");

        plt::pause(0.01);

    }

    end = omp_get_wtime();
    cout << "Real time : " << end - begin << " s" << endl;

    plt::save("./view.png");
    plt::show();

}