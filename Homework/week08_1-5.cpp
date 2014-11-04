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

int iterate_pt(double complex c);

int Mand[ncols][nrows];

int main() {
    double crmin = -0.75;
    double crmax = -0.74;
    double cimin = -0.138;
    double cimax = -0.127;
    
    int x, y;
    int color;
    double complex c;
    double complex imag = 0.0 + 1.0i;
    double dx = (crmax - crmin)/ncols;
    double dy = (cimax - cimin)/nrows;
    
    for(y = 0; y < nrows; y++){
        for(x = 0; x < ncols; x++){
            c = (crmin + x*dx) + (cimin + y*dy)*imag;
            Mand[x][y] = iterate_pt(c) + 65;
        }
    }
    
    //printf("P3\n%d %d\n255\n", ncols, nrows);
    cout << "P3\n" << ncols << " " << nrows << "\n255" << endl;
    
    for(y = 0; y < nrows; y++){
        for(x = 0; x < ncols; x++){
            color = Mand[x][y];
            //printf("%d\n%d\n%d\n", color*4, color*3, color*2);
            cout << color << endl << color << endl << color << endl;
        }
    }
}

int iterate_pt(double complex c) {
    double complex z = 0.0 + 0.0i;
    int iterations = 0;
    int k;
    for (k = 1; k <= (255-64); k++){
        z = z*z + c;
        if(sqrt(z*conj(z)) > 50){
            break;
        } else {
            ++iterations;
        }
    }
    return iterations;	
}