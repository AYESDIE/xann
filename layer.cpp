//
// Created by ayesdie on 21/08/19.
//

#include "layer.hpp"

Layer::Layer(int size)
{
    this->size = size;
    for (int i = 0; i < size; ++i)
    {
        Neuron *n = new Neuron(0.00);
        this->neurons.push_back(n);
    }
}

void Layer::setValue(int i, double v)
{
    this->neurons.at(i)->setValue(v);
}

Matrix* Layer::matrixifyValues()
{
    Matrix *m = new Matrix(1, this->neurons.size(), false);
    for (int i = 0; i < this->neurons.size(); ++i)
    {
        m->setValue(1, i, this->neurons.at(i)->getValue());
    }

    return m;
}

Matrix* Layer::matrixifyActivatedValues()
{
    Matrix *m = new Matrix(1, this->neurons.size(), false);
    for (int i = 0; i < this->neurons.size(); ++i)
    {
        m->setValue(1, i, this->neurons.at(i)->getActivatedValue());
    }

    return m;
}

Matrix* Layer::matrixifyDerivedValues()
{
    Matrix *m = new Matrix(1, this->neurons.size(), false);
    for (int i = 0; i < this->neurons.size(); ++i)
    {
        m->setValue(1, i, this->neurons.at(i)->getDerivedValue());
    }

    return m;
}
