// For loop

#include <stdio.h>
#include <math.h>

int main () {
	int i = 1;
	int n;
	
	for (n = 1; n <= 10; n++){
		printf("The cube of %d is %d \n", n, (int)pow(n,3)); //The %d can be changed to change the outcome. Ex %x for Hex
	}
}