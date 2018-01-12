#pragma once

#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * @brief Class to manage the matrix
 */

class Matrix {

public:

    Matrix();

    Matrix(const int n_rows, const int n_columns, const double init);

    ~Matrix();

    void display(std::ostream &str);

    int nb_rows() const;

    int nb_columns() const;

    void fillRandomly();

    double get(int i, int j);

    const double get(int i, int j) const;

    void set(int i, int j, double scalar);

    void setAll(int scalar);

    Matrix &operator=(const Matrix &);

    bool operator==(const Matrix &);

    bool operator!=(const Matrix &);

private:

    double *mat; /// Pointer to stock the matrix value
    int n; /// Numbers of rows
    int m; /// Numbers of columns
    int nm; /// Numbers of rows * columns

};

std::ostream &operator<<(std::ostream &out, const Matrix &m);
