#include <iostream>
#include "Complexsum.h"
#include "Complex.h"
using namespace std;

ComplexSum::ComplexSum(int a):order(a)
{
 *tab=new Complex [order];
counter=0;
}

ComplexSum::ComplexSum(const ComplexSum& X):order
{
order=X.order;
}

void ComplexSum::add(Complex& X)
{
if(counter==order){
	cout<<"Nie można dodać już żadnej liczby"<<endl;
	}
else{ 
tab[counter].real=X.real;
tab[counter].imag=X.imag;
counter+=1;	
}
}

void ComplexSum::SumEverything(ComplexSum& X)
{
int i=0;
for(i=0;i<order;i++)
    {
	X.real+=tab[i].real;
	X.imag+=tab[i].imag; 
	}
}
