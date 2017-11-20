#include "../src/Matrix.hpp"
#include <iostream>

using namespace std;

int main() {

    bool success = true;

    Matrix *matrix = new Matrix(2,3,5);

    if (matrix->nb_rows() != 2) {
        success = false;
        cout << "Erreur sur le nombre de lignes" << endl;
    }

    if (matrix->nb_columns() != 3) {
        success = false;
        cout << "Erreur sur le nombre de colonnes" << endl;
    }

    if (GET(matrix,1,2) != 5) {
        success = false;
        cout << "Erreur sur le remplissage" << endl;
    }

    if (success) {
        exit(0);
    } else {
        exit(1);
    }

}