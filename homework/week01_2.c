//Illustrate the following operators: Arithmetic operators: +, -, *, /, %;  
//Relational operators: <, >, <=, >=, ==, !=; and Logical operators: &&, ||, and !.  
//Note that C does not have a primitive Boolean type.

#include<stdio.h>

void arithmetic();
void relational();
void logical();

int main () {
	arithmetic();
	relational();
	logical();
}

void arithmetic() {
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("*** This is an example of Arithmetic Operators ***\n");
	printf("Input 2 integers.\n");
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	c = a - b;
	printf("%d - %d = %d\n", a, b, c);
	c = a * b;
	printf("%d x %d = %d\n", a, b, c);
	c = a / b;
	printf("%d / %d = %d\n", a, b, c);
	c = a % b;
	printf("%d %% %d = %d\n", a, b, c);

}

void relational(){
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("*** This is an example of Relational Operators ***\n");
	printf("Input 2 integers.\n");
	scanf("%d %d", &a, &b);
	
	if(a!=b){
		printf("%d is not equal to %d\n", a, b);
	}
	if(a<=b) {
		if(a==b){
			printf("%d is equal to %d\n", a, b);
		} else {
			printf("%d is less than %d\n", a, b);
		}
	} else if(a>=b) {
		if(a==b){
			printf("%d is equal to %d\n", a, b);
		} else {	
			printf("%d is greater than %d\n", a, b);
		}
	} 
}

void logical() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("*** This is an example of Logical Operators ***\n");
	printf("Input 2 integers.\n");
	scanf("%d %d", &a, &b);
	
	if(a%2==0 && b%2==0) {
		printf("Both %d and %d are even!", a, b);
	}
	if (a%2!=0 || b%2!=0) {
		printf("One, or both of the numbers %d and %d are odd!", a, b);
	}
}