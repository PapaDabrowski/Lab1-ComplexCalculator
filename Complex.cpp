#include <iostream>
#include "Complex.h"
using namespace std;


Complex::Complex()
{
real=0;
imag=0;
}

Complex::Complex(double a,double b)
{
real=a;
imag=b;
}

Complex::Complex(const Complex& x)
{
real=x.real;	
imag=x.imag;
}

void Complex::set(double a,double b)
{
real=a;
real=b;	
}

void Complex::show()
{
cout<<real<<" + "<<imag<<"j"<<endl; 	
}

void Complex::sum(Complex& a, Complex& b)
{
a.real+=b.real;
a.imag+=b.imag;
b.real=0;
b.imag=0;
}

Complex::~Complex()
{
cout<<"Destruktor"<<endl;	
}
