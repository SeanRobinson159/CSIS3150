// Write and test a function that computes n 
// values of the sine function evenly spaced between 0 and 2Pi.

#include<stdio.h>
#include<math.h>
#define PI 3.14159265

int main() {
	int interval;
	int a;
	int i;
	double answer;
	double s = sin(0);
	//printf("sin(%d) = %f\n", 0, s);
	
	printf("Please input the interval.\n");
	scanf("%d", &a);
	
	interval = 360/a;
	printf("Number entered: %d\nInterval concluded %d Degrees\n", a, interval);
	for(i = 0; i < 361; i+=interval){
		answer = sin(i*(PI/180));
		printf("Sin(%d) = %f\n", i, answer);
	}
	
	printf("%ll", PI);
}