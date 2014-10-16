// Random numbers

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	unsigned seed;
	
	printf("Enter seed: ");
	scanf("%u", &seed);
	
	srand(seed);	//This is hidden in Java.
	
	for(i = 1; i <= 10; i++) {
		printf("%d\n", 1 + (rand()%6));
	}
}	