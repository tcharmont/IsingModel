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

    double GET(int i, int j);
	
	const double GET(int i, int j) const;

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

    double *mat;
	int n; // numbers of rows
	int m; // numbers of columns
	int nm; // numbers of rows * columns

};
