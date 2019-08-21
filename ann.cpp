//
// Created by ayesdie on 21/08/19.
//

#include "ann.hpp"

ann::ann(std::vector<int> topology)
{
    this->topology = topology;
    this->topologySize = topology.size();

    for (int i = 0; i < topologySize; ++i)
    {
        Layer *l = new Layer(topology.at(i));
        this->layers.push_back(l);
    }

    for (int j = 0; j < topologySize - 1; ++j)
    {
        Matrix *m = new Matrix(topology.at(j), topology.at(j + 1), true);
        this->weightMatrices.push_back(m);
    }
}

void ann::setCurrentInput(std::vector<double> input)
{
    this->input = input;

    for (int i = 0; i < input.size(); ++i) {
        this->layers.at(0)->setValue(i, input.at(i));
    }
}

std::ostream &operator<<(std::ostream &os, const ann &ann) {
    
    return os;
}
