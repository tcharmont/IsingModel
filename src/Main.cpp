#include <cmath>
#include "interface/matplotlibcpp.hpp"
#include "model/MonteCarlo.hpp"
#include <iostream>

namespace plt = matplotlibcpp;

int main(int argc, char *argv[]) {

    /// Simulation parameters
    int nMC = 150;
    int nMP = 200;
    int size = 10;

    double temperatureMax = 7;
    int nbStep = 30;
    double temperatureStep = temperatureMax / nbStep;
    double temperature = 0;
    double fieldB = 0;

    /// Parse arguments
    bool isParallel = false;
    bool plotEnergy = false;
    bool plotMagnetisation = true;
    bool runAppli = true;

    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "--energy") {
            plotEnergy = true;
            plotMagnetisation = false;
        }
        if (std::string(argv[i]) == "--magnetisation") {
            plotMagnetisation = true;
            plotEnergy = false;
        }
        if (std::string(argv[i]) == "--h") {
            fieldB = atof(argv[i + 1]);
        }
        if (std::string(argv[i]) == "--help") {
            std::cout << "Instructions are :" << std::endl;
            std::cout << "--energy  --> Plot the energy" << std::endl;
            std::cout << "--magnetisation  --> Plot the magnetisation" << std::endl;
            std::cout << "--h 0.5  --> Select the magnetic field (here 0.5) appliqued on the system" << std::endl;
            runAppli = false;
        }
    }

    Grid *grid = new Grid(size);
    IsingModel *isingModel = new IsingModel(size, temperature, fieldB);
    MonteCarlo *monteCarlo = new MonteCarlo(nMC, nMP, isingModel, grid);

    double physicsVar = 0;
    double ic = 0;

    if (runAppli) {
        std::vector<double> x, y, icmin, icmax, zero;
        for (int i = 1; i < nbStep; i++) {
            isingModel->setTemperature(i * temperatureStep);
            x.push_back(i * temperatureStep);
            if (plotMagnetisation) {
                monteCarlo->getMagnetisation(physicsVar, ic);
            } else if (plotEnergy) {
                monteCarlo->getEnergy(physicsVar, ic);
            }
            y.push_back(physicsVar);
            icmin.push_back(physicsVar - ic);
            icmax.push_back(physicsVar + ic);
            zero.push_back(0);

            plt::clf();
            plt::plot(x, y);
            plt::plot(x, icmin, "r--");
            plt::plot(x, icmax, "r--");
            plt::plot(x, zero, "g");
            plt::xlim(0, (int) (temperatureMax));
            plt::xlabel("Temperature (K)");
            if (plotMagnetisation) {
                plt::ylabel("Magnetisation");
                plt::title("M = (T, B)");
            } else if (plotEnergy) {
                plt::ylabel("Energy");
                plt::title("E = (T, B)");
            }

            plt::pause(0.01);

        }

        plt::save("./IsingSimulation.png");
        plt::show();
    }

}
