// Illustrate call by reference versus call by value using 
// a function other than the cube function shown in class.

#include<stdio.h>

int addByValue(int n1, int n2);
int addByReference(int *iptr1, int *iptr2);

int main() {
	int n1, n2, answer;
	printf("Enter the first number: ");
	scanf("%d", &n1);
	printf("Enter the second number: ");
	scanf("%d", &n2);
	
	answer = addByValue(n1, n2);
	printf("The answer after call-by-value is %d\n", answer);
	
	answer = addByReference(&n1, &n2);
	printf("The answer after call-by-reference is %d\n", answer);
}

int addByValue(int n1, int n2){
	int answer = n1+n2;
	printf("%d + %d = %d\n", n1, n2, answer);
	return answer;
}

int addByReference(int *iptr1, int *iptr2){
	int answer = (*iptr1)+(*iptr2);
	printf("%d + %d = %d\n", *iptr1, *iptr2, answer);
	return answer;
}