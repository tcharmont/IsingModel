#include "Matrix.hpp"

Matrix::Matrix() : mat(nullptr), n_rows(0), n_columns(0) {}

Matrix::Matrix(int n, int m) {
    Matrix(n, m, 0);
}

Matrix::Matrix(int n, int m, double scalar) {
    n_rows = n;
    n_columns = m;
    if (n_rows == 0 || n_columns == 0) {
        mat = nullptr;
    } else {
        mat = new double *[n_rows];
        for (int i = 0; i < n_rows; i++) {
            mat[i] = new double[n_columns];
            for (int j = 0; j < n_columns; ++j) {
                mat[i][j] = scalar;
            }
        }
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < n_rows; i++) {
        delete[] mat[i];
    }
    delete[] mat;
}

int Matrix::nb_rows() const {
    return n_rows;
}

int Matrix::nb_columns() const {
    return n_columns;
}

void Matrix::fillRandomly() {
    srand(time(NULL));
    for (int i = 0; i < n_rows; i++) {
        for (int j = 0; j < n_columns; ++j) {
            mat[i][j] = (rand() % 2 == 1) ? -1 : 1;
        }
    }
}

/*double &Matrix::operator()(const int &i, const int &j) {
    return this->mat[i][j];
}*/

double &Matrix::operator()(const int &i, const int &j) const {
    return this->mat[i][j];
}

double &Matrix::GET(const Matrix &matrix, int i, int j) {
    return &matrix[i][j];
}

Matrix &Matrix::operator=(const Matrix &matrix) {
    memcpy(mat, matrix.mat, n_rows * n_columns * sizeof(double));
    return *this;
}

bool Matrix::operator==(const Matrix &matrix) {
    Matrix &m = *this;
    for (int i = 0; i < matrix.n_rows; i++) {
        for (int j = 0; j < matrix.n_columns; ++j) {
            if (m(i, j) != matrix(i, j))
                return false;
        }
    }
    return true;
}