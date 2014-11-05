//Take one program from each of weeks 1 through 4 and mand.c from
//week 5 and turn them into C++ programs that compile under g++.
//For the Mandelbrot program, use the C++ <complex> library.
//Also use <iostream>.

#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num = 0;
    
    for (int i = 0; argv[i] != NULL; i++) {
        num += atoi(argv[i]);
    }
    cout << "Numbers added together = " << num << endl;
}