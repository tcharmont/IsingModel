#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

class Matrix {

public:

    Matrix();

    Matrix(int n_rows, int n_columns);

    Matrix(const int n_rows, const int n_columns, double init);

    ~Matrix();

    //void display(std::ostream &str);

    int nb_rows() const;

    int nb_columns() const;

    void fillRandomly();

    //double &operator()(const int &i, const int &j);

    double &operator()(const int &i, const int &j) const;

    double &GET(const Matrix &matrix, int i, int j);

    /*Matrix &operator+=(const double &);

    Matrix &operator+=(const Matrix &);

    Matrix &operator-=(const double &);

    Matrix &operator-=(const Matrix &);

    Matrix &operator*=(const double &);

    Matrix &operator/=(const double &);

    Matrix &operator-();*/

    Matrix &operator=(const Matrix &);

    bool operator==(const Matrix &);

private:

    double **mat;
    int n_rows;
    int n_columns;

};