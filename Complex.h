#pragma once


class Complex
{
private:
double real;
double imag;	

public:
Complex();
Complex(double,double);
Complex(const Complex&);
void set(double,double);
void show();
void sum(Complex&,Complex&);
~Complex();
};
