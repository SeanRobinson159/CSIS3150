// passing arrays

#include <stdio.h>
void cubeByValue(int n);
void cubeByReference(int *iptr);

int main () {
	int n = 10;
	
	printf("The original value for n is %d\n", n);
	
	cubeByValue(n);
	
	printf("The value of n after call-by-value is %d\n", n);
	
	cubeByReference(&n);
	
	printf("The value of n after call by reference is %d\n", n);

}

void cubeByValue (int n) {
	n = n*n*n;
	printf("input cube is %d\n", n);
}

void cubeByReference (int *iptr) {
	*iptr = (*iptr)*(*iptr)*(*iptr);
	printf("Input cube is %d\n",*iptr);
}