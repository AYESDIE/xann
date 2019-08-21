#include <iostream>
#include "neuron.hpp"

int main() {
    // Input
    Neuron *n = new Neuron(0.9);

    std::cout << "Val: " << n->getValue() << "\n";
    std::cout << "ActivatedVal: " << n->getActivatedValue() << "\n";
    std::cout << "DerivedVal: " << n->getDerivedValue() << "\n";
    
    return 0;
}