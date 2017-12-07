#pragma once

#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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

    double *mat;
    int n; // numbers of rows
    int m; // numbers of columns
    int nm; // numbers of rows * columns

};

std::ostream &operator<<(std::ostream &out, const Matrix &m);
