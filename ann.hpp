//
// Created by ayesdie on 21/08/19.
//

#ifndef XANN_ANN_HPP
#define XANN_ANN_HPP

#include <iostream>
#include "matrix.hpp"
#include "layer.hpp"

class ann {
public:
    ann(std::vector<int> topology);

    void setCurrentInput(std::vector<double> input);

    friend std::ostream &operator<<(std::ostream &os, const ann &ann);

private:
    int topologySize;
    std::vector<int> topology;

    std::vector<Layer *> layers;
    std::vector<Matrix *> weightMatrices;
    std::vector<double> input;
};


#endif //XANN_ANN_HPP
