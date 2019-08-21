//
// Created by ayesdie on 21/08/19.
//

#ifndef XANN_NEURON_HPP
#define XANN_NEURON_HPP

#include <iostream>
#include <math.h>

class Neuron
{
public:
    Neuron(double value);

    // Fast Sigmoid Function
    // f(x) = x / (1 + |x|)
    void activate();

    // Derivative for fast sigmoid function
    // f'(x) = f(x) * (1 - f(x))
    void derive();

    // Getter
    double getValue() { return this->value; }
    double getActivatedValue() { return this->activatedValue; }
    double getDerivedValue() { return this->derivedValue; }

    // Setter
    void setValue(double value);

private:
    double value;
    double activatedValue;
    double derivedValue;
};

#endif //XANN_NEURON_HPP
