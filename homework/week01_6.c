//Write and test a function that computes the distance between two points 2D.

#include<stdio.h>
#include<math.h>

int main() {
	double x1 = 0;
	double x2 = 0;
	double y1 = 0;
	double y2 = 0;
	double dx;
	double dy;
	double distance = 0;
	
	printf("Please input X1.\n");
	scanf("%lf", &x1);
	printf("Please input Y1.\n");
	scanf("%lf", &y1);
	printf("Please input X2.\n");
	scanf("%lf", &x2);
	printf("Please input Y2.\n");
	scanf("%lf", &y2);
	
	dx = (x2-x1);
	dy = (y2-y1);
	distance = sqrt(dx*dx + dy*dy);
	
	printf("The distance between the points ");
	printf("(%g,%g) and (%g,%g) is: %lf", x1, y1, x2, y2, distance);
}