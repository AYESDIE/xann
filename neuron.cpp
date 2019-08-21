//
// Created by ayesdie on 21/08/19.
//

#include "neuron.hpp"

Neuron::Neuron(double value)
{
    this->value = value;
    activate();
    derive();
}

void Neuron::activate()
{
    this->activatedValue = this->value
        / (1 + std::abs(this->value));
}

void Neuron::derive()
{
    this->derivedValue = this->activatedValue
        * (1 - this->activatedValue);
}