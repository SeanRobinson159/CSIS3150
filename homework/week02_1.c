// Write a program that, given positive integer n from 
// the console, computes the first n fibonacci numbers. 
// (You probably don’t want a recursive algorithm).

#include<stdio.h>

void main() {
	int n, first = 0, second = 1, next, i;
	printf("Please enter the number of fibonacci numbers you want displayed.\n");
	scanf("%d", &n);
	
	printf("First %d numbers of the Fibonacci sequence are:\n", n);
	
	for(i = 0; i < n; i++){
		if(i <= 1){
			next = i;
		}else{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d\n", next);
	}
}