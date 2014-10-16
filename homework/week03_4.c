// Referring to the cplusplus documentation on the 
// cmath library, test drive these functions: cos, exp, 
// log, pow, sqrt, ceil, floor.

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main () {
	printf("\n\nThis is a test of the cosine function\n");
	printf("cos(0)\t\tcos(90)\t\tcos(135)\n");
	printf("%f\t%f\t%f\t", cos(0), cos(90*PI/180.0), cos(135*PI/180.0));
	
	printf("\n\nThis is a test of the sine function\n");
	printf("sin(0)\t\tsin(90)\t\tsin(135)\n");
	printf("%f\t%f\t%f\t", sin(0), sin(90*PI/180.0), sin(135*PI/180.0));
	
	printf("\n\nThis is a test of the exp function\n");
	printf("exp(5)\t\texp(4)\t\texp(3)\n");
	printf("%f\t%f\t%f\t", exp(5), exp(4), exp(3));
	
	printf("\n\nThis is a test of the log function\n");
	printf("log(1)\t\tlog(4)\t\tlog(3)\n");
	printf("%f\t%f\t%f\t", log(1), log(4), log(3));
	
	printf("\n\nThis is a test of the pow function\n");
	printf("2^10\t\t2^16\t\t2^32\n");
	printf("%f\t%f\t%f\t", pow (2, 10), pow(2, 16), pow(2, 32));
	
	printf("\n\nThis is a test of the sqrt function\n");
	printf("sqrt(4)\t\tsqrt(40)\tsqrt(144)\n");
	printf("%f\t%f\t%f\t", sqrt(4), sqrt(40), sqrt(144));
	
	printf("\n\nThis is a test of the ceil function\n");
	printf("ceil(5.1)\tceil(5.9)\tceil(4.1)\n");
	printf("%f\t%f\t%f\t", ceil(5.1), ceil(5.9), ceil(4.1));
	
	printf("\n\nThis is a test of the floor function\n");
	printf("floor(5.1)\tfloor(5.9)\tfloor(4.1)\n");
	printf("%f\t%f\t%f\t", floor(5.1), floor(5.9), floor(4.1));
	
}

