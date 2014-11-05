// A Ratio class 6

#include <iostream>
#include "ratio.h"
using namespace std;

int main() {
    Ratio x(2,3);
    Ratio y(2,5);
    Ratio z(1,1);
    cout << "X = ";
    x.print();
    cout << "Y = ";
    y.print();
    
    z = x*y;
    cout << "X*Y = ";
    z.print();
    
    z = x+y;
    cout << "X+Y = ";
    z.print();
}