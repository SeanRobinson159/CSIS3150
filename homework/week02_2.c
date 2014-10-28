//Write a simple program that, given an integer n from the console, 
//creates a pointer to n, then carefully explains (via printf statements) 
//the difference between the pointer to n, the value of n, the & operator.

#include<stdio.h>

int main() {
	int n;
	int *nptr;
	printf("Input a integer\n");
	scanf("%d", &n);
	nptr = &n;
	printf("\nN value:\t%d\nN pointer:\t%d\n\n", n, nptr);
	
	printf("The pointer to N is the *address* of the \nmemory location of N, not the value of N\n");
	printf("The & symbol is the *address* of the variable. \nNot the value of the variable");
}