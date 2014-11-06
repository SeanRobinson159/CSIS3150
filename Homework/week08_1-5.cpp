//Take one program from each of weeks 1 through 4 and mand.c from
//week 5 and turn them into C++ programs that compile under g++.
//For the Mandelbrot program, use the C++ <complex> library.
//Also use <iostream>.

#include<iostream>
#include<math.h>
#include<complex>

#define ncols 800
#define nrows 800

using namespace std;

int iterate_pt(complex<double> c);

int Mand[ncols][nrows];

int main() {
    double crmin = -0.75;
    double crmax = -0.74;
    double cimin = -0.138;
    double cimax = -0.127;
    
    int color;
    complex<double> imag (0.0,1.0);
    complex<double> c(0.0,0.0);
    double dx = (crmax - crmin)/ncols;
    double dy = (cimax - cimin)/nrows;
    
    for(int y = 0; y < nrows; y++){
        for(int x = 0; x < ncols; x++){
            c = (crmin + x*dx) + (cimin + y*dy)*imag;
            Mand[x][y] = iterate_pt(c) + 65;
        }
    }
    
    //printf("P3\n%d %d\n255\n", ncols, nrows);
    cout << "P3\n" << ncols << " " << nrows << "\n255" << endl;
    
    for(int y = 0; y < nrows; y++){
        for(int x = 0; x < ncols; x++){
            color = Mand[x][y];
            //printf("%d\n%d\n%d\n", color*4, color*3, color*2);
            cout << color << endl << color << endl << color << endl;
        }
    }
}

int iterate_pt(complex<double> c) {
    complex<double> z (0.0,0.0);
    int iterations = 0;
    for (int k = 1; k <= (255-64); k++){
        z = z*z + c;
        complex<double> a (50.0, 0.0);
        complex<double> b = sqrt(z*conj(z));
        if(a.real() > b.real()){
            break;
        } else {
            ++iterations;
        }
    }
    return iterations;	
}