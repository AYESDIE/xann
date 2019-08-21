//
// Created by ayesdie on 21/08/19.
//

#include "matrix.hpp"

Matrix::Matrix(int numRows, int numCols, bool isRandom)
{
    this->numRows = numRows;
    this->numCols = numCols;
    this->isRandom = isRandom;

    for (int i = 0; i < numRows; ++i)
    {
        std::vector<double> colValues;
        for (int j = 0; j < numCols; ++j)
        {
            double r = (isRandom ? this->generateRandomNumber() : 0.00);
            colValues.push_back(r);
        }

        this->values.push_back(colValues);
    }
}

double Matrix::generateRandomNumber()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0, 1);

    return dis(gen);
}

std::ostream &operator<<(std::ostream &os, const Matrix &matrix) {
    for (auto x : matrix.values)
    {
        for (auto y : x)
        {
            os << y << "\t\t";
        }
        os << "\n";
    }
    return os;
}

Matrix* Matrix::transpose()
{
    Matrix *m = new Matrix(this->numCols,
            this->numRows,
            false);

    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j < numCols; ++j)
        {
            m->setValue(j, i, this->getValue(i, j));
        }
    }

    return m;
}
