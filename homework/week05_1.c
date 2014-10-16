//Add these methods to the Complex structure: add, mult. divide.

#include <stdio.h>
#include <math.h>

typedef struct {
	double re;	//real
	double im;	//imaginary
}Complex;

Complex add (Complex c1, Complex c2);
Complex multiply (Complex c1, Complex c2);
Complex divide (Complex c1, Complex c2);

int main() {
	Complex n1, n2, a, m, d;
	/*
	printf("Enter the first real and imaginary numbers\n");
	scanf("%d %d", n1.re, n1.im);
	printf("Enter the second real and imaginary numbers\n");
	scanf("%d %d", n2.re, n2.im);
	*/
	n1.re = 1.0;
	n1.im = 2.0;
	
	n2.re = 5.0;
	n2.im = 4.0;
	printf("%d\t%d\n%d\t%d\n\n", n1.re, n1.im, n2.re, n2.im);
	
	printf("%d %d i\n", add(n1,n2).re, add(n1,n2).im);
	printf("%d %d i\n", multiply(n1,n2).re, multiply(n1,n2).im);
	printf("%d %d i\n", divide(n1,n2).re, divide(n1,n2).im);
	//a = add(n1, n2);
	//m = multiply(n1, n2);
	//d = divide(n1, n2);
	
}

Complex add (Complex c1, Complex c2){
	Complex result;
	result.re = c1.re + c2.re;
	result.im = c1.im + c2.im;
	return result; 
}

Complex multiply (Complex c1, Complex c2){
	Complex result;
	result.re = c1.re * c2.re;
	result.im = c1.im * c2.im;
	return result; 
}

Complex divide (Complex c1, Complex c2){
	Complex result;
	result.re = (c1.re)/(c2.re);
	result.im = (c1.im)/(c2.im);
	return result; 
}