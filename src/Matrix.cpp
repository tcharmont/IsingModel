#include "Matrix.hpp"

Matrix::Matrix() : mat(nullptr), n(0), m(0), nm(0) {}

Matrix::Matrix(const int n_rows, const int n_columns, const double scalar) {
    n = n_rows;
    m = n_columns;
    nm = n_rows * n_columns;
    if (n == 0 || m == 0) {
        mat = nullptr;
    } else {
        mat = new double[n_rows * n_columns];
        for (int i = 0; i < nm; i++) {
            mat[i] = scalar;
        }
    }
}

Matrix::~Matrix() {
    delete[] mat;
}

void Matrix::display(std::ostream &str) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            str << mat[i * n + j] << " ";
        }
        str << std::endl;
    }
}

int Matrix::nb_rows() const {
    return n;
}

int Matrix::nb_columns() const {
    return m;
}

void Matrix::fillRandomly() {
    srand(time(NULL));
    for (int i = 0; i < nm; i++) {
        mat[i] = (rand() % 2 == 1) ? -1 : 1;
    }
}

double Matrix::get(int i, int j) {
    return this->mat[i * n + j];
}

const double Matrix::get(int i, int j) const {
    return this->mat[i * n + j];
}

void Matrix::set(int i, int j, int scalar) {
    this->mat[i * n + j] = scalar;
}

void Matrix::setAll(int scalar) {
    for (int i = 0; i < nm; i++) {
        this->mat[i] = scalar;
    }
}

Matrix &Matrix::operator=(const Matrix &matrix) {
    memcpy(mat, matrix.mat, nm * sizeof(double));
    return *this;
}

bool Matrix::operator==(const Matrix &matrix) {
    Matrix &mCurrent = *this;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mCurrent.get(i, j) != matrix.get(i, j)) {
                return false;
            }
        }
    }
    return true;
}
