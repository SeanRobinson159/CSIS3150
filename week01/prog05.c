// Functions

#include <stdio.h>

int cube(int y); 	// Function prototype
					// Usually you would put prototype functions in a header file.

int main () {
	int n;
	
	for (n = 1; n <= 10; n++){
		printf("%d \n", cube(n));
	}
}


int cube (int m){
	return (m*m*m);
}