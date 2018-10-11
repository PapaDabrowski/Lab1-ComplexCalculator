#pragma once

class ComplexSum
{
private:
const int order;

int counter;
public:
ComplexSum(int);
ComplexSum(const ComplexSum&);
~ComplexSum();
void add(Complex&);
Complex SumEverything();
}
