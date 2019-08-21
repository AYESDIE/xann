//
// Created by ayesdie on 21/08/19.
//

#ifndef XANN_LAYER_HPP
#define XANN_LAYER_HPP

#include <iostream>
#include <vector>
#include "neuron.hpp"
#include "matrix.hpp"

class Layer
{
public:
    Layer(int size);

    void setValue(int i, double v);
    Matrix *matrixifyValues();
    Matrix *matrixifyActivatedValues();
    Matrix *matrixifyDerivedValues();
private:
    int size;

    std::vector<Neuron *> neurons;

};

#endif //XANN_LAYER_HPP
