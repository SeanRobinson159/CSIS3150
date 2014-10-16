//

#include <stdio.h>
#include <math.h>

int main () {
	double theta;
	double PI = M_PI;
	
	for(theta = 0; theta <= 2*PI; theta += 0.1) {
		printf("%f \t %f\n", theta, sin(theta));
	}	
}