#include "../src/model/Matrix.hpp"
#include <iostream>

using namespace std;

int main() {

    bool success = true;

    Matrix matrix = Matrix(2, 3, 5);
    Matrix matrix2 = Matrix(2, 3, 5);

    if (matrix.nb_rows() != 2) {
        success = false;
        cerr << "Error on the lign number" << endl;
    }

    if (matrix.nb_columns() != 3) {
        success = false;
        cerr << "Error on the column number" << endl;
    }

    bool successTempo = true;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix.get(i, j) != 5) {
                successTempo = false;
            }
        }
    }
    if (!successTempo) {
        success = false;
        cerr << "Error on the matrix initialisation" << endl;
    }

    if (!(matrix == matrix2)) {
        success = false;
        cerr << "Error on the matrix comparaison (==)" << endl;
    }

    if (matrix != matrix2) {
      success = false;
        cerr << "Error on the matrix comparaison (!=)" << endl;
    }

    matrix.set(0, 0, 10);
    if (matrix.get(0, 0) != 10) {
        success = false;
        cerr << "Error on set one value" << endl;
    }

    Matrix matrix3 = Matrix(2, 3, 2);
    matrix = matrix3;
    successTempo = true;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix.get(i, j) != 2) {
                successTempo = false;
            }
        }
    }

    if (!successTempo) {
        success = false;
        cerr << "Error on the allocation" << endl;
    }

    matrix3.set(0,0,1000);
    if (matrix.get(0,0) == 1000) {
        success = false;
        cerr << "Error on the allocation (pointer)" << endl;
    }

    if (success) {
        exit(0);
    } else {
        exit(1);
    }

}
