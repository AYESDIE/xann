#include <iostream>
#include "neuron.hpp"
#include "matrix.hpp"
#include "ann.hpp"

int main() {
    // Input
    Neuron *n = new Neuron(0.9);

    std::cout << "Val: " << n->getValue() << "\n";
    std::cout << "ActivatedVal: " << n->getActivatedValue() << "\n";
    std::cout << "DerivedVal: " << n->getDerivedValue() << "\n";

    // Matrix
    Matrix *m = new Matrix(3, 2, true);
    std::cout << *m;

    Matrix *mT = m->transpose();
    std::cout << *mT;

    std::vector<int> topology;
    topology.push_back(3);
    topology.push_back(2);
    topology.push_back(3);

    std::vector<double> input;
    input.push_back(1.0);
    input.push_back(0.0);
    input.push_back(1.0);

    ann *nn = new ann(topology);
    nn->setCurrentInput(input);
    return 0;
}