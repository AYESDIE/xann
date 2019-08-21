//
// Created by ayesdie on 21/08/19.
//

#ifndef XANN_MATRIX_HPP
#define XANN_MATRIX_HPP

#include <vector>
#include <random>
#include <ostream>

class Matrix
{
public:
    Matrix(int numRows, int numCols, bool isRandom);

    Matrix *transpose();
    double generateRandomNumber();

    void setValue(int r, int c, double v) { this->values.at(r).at(c) = v; };
    double getValue(int r, int c) { return this->values.at(r).at(c); };

    int getNumRows() { return this->numRows; }
    int getNumCols() { return this->numCols; }

    friend std::ostream &operator<<(std::ostream &os, const Matrix &matrix);

private:
    int numRows;
    int numCols;
    bool isRandom;

    std::vector<std::vector<double>> values;
};


#endif //XANN_MATRIX_HPP
