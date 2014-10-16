// Write a function which takes two integer arrays and 
// returns “true” if the two arrays have exactly the same elements.

#include<stdio.h>
#define SIZE 5

void same(int a[SIZE], int b[SIZE]);
void printArray(int a[SIZE]);

int main() {
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {5,4,3,2,1};
	int i;
	
	printf("\nArray 1:\t");
	printArray(a);
	printf("\nArray 2:\t");
	printArray(b);
	
	printf("\nAre the arrays the same? ");
	same(a, b);

	for(i = 0; i < SIZE; i++){
		a[i] = i+1;
		b[i] = i+1;
	}
	
	printf("\nArray 1:\t");
	printArray(a);
	printf("\nArray 2:\t");
	printArray(b);
	
	printf("\nAre the arrays the same? ");
	same(a, b);
	
}

void same(int a[SIZE], int b[SIZE]){
	int i;
	for(i = 0; i < SIZE; i++){
		if(a[i] != b[i]){
			printf("False\n");
			return;
		}
	}
	printf("True\n");
}

void printArray(int a[SIZE]){
	int i;
	for(i = 0; i < SIZE; i++){
		printf("%d ", a[i]);
	}
}
