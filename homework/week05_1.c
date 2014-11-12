//Add these methods to the Complex structure: add, mult. divide.

#include <stdio.h>
#include <math.h>

typedef struct {
	double re;	//real
	double im;	//imaginary
}Complex;

void add (Complex c1, Complex c2);
void multiply (Complex c1, Complex c2);
void divide (Complex c1, Complex c2);

int main() {
	Complex n1, n2;

	n1.re = 1.0;
	n1.im = 2.0;
	
	n2.re = 3.0;
	n2.im = 4.0;
	printf("N1: %.2f %.2fi\nN2: %.2f %.2fi\n\n", n1.re, n1.im, n2.re, n2.im);
    printf("N1 + N2 = ");
    add(n1, n2);
	printf("N1 * N2 = ");
    multiply(n1, n2);
	printf("N1 / N2 = ");
    divide(n1, n2);
	
}

void add (Complex c1, Complex c2){
	Complex result;
	result.re = (double)c1.re + (double)c2.re;
	result.im = (double)c1.im + (double)c2.im;
    printf("%.2f %.2fi\n", result.re, result.im);
}

void multiply (Complex c1, Complex c2){
	Complex result;
	result.re = c1.re * c2.re;
	result.im = c1.im * c2.im;
    printf("%.2f %.2fi\n", result.re, result.im);
}

void divide (Complex c1, Complex c2){
	Complex result;
	result.re = (c1.re)/(c2.re);
	result.im = (c1.im)/(c2.im);
    printf("%.2f %.2fi\n", result.re, result.im);
}