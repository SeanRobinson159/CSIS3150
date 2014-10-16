// Write a program that, given positive integer n from 
// the console, passes the array [1,...,n] to a function which 
// computes the square of each element and returns the result to the caller.

#include<stdio.h>

void squareit(int n[], int nSize);

int main() {
	int aSize;
	printf("Enter the size of the array: ");
	scanf("%d", &aSize);
	int a[aSize];
	int i;
	printf("Please input %d integer(s) to be squared.\n", aSize);
	for(i = 0; i < aSize; i++){
		printf("%d: > ", i+1);
		scanf("%d", &a[i]);
	}	
	squareit(a,aSize);
	printf("\nThe squared array values:\n");
	for (i = 0; i < aSize; i++) {
		printf("%d: > %d\n", i+1, a[i]);
	}
	
	
}

void squareit(int n[], int nSize){
	int j;
	
	for( j = 0; j < nSize; j++ ) {
		n[j] = n[j]*n[j];
	}
}