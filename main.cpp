#include <iostream>
#include <string>
#include "Complex.h"
#inlcude "Complexsum.h"
using namespace std;
int main()
{
Complex First(1,2);
Complex Second(3,4);
Complex Third(5,6);
Complex Fourth(7,6);
Complex.sum(First,Second);
Second.show();
ComplexSum Suming(6);
Suming.add(First);
Suming.add(Second);
Suming.add(Third);
ComplexSum SumingCopy(Suming);
SumingCopy.add(Fourth);
Suming.SumEverything();
Suming.SumEverything();
return 0;
}
