//Use a for loop that computes and prints the powers of 2 from 2^1 to 2^20 (around a million).

#include<stdio.h>
#include<math.h>

int main() {
	int i;
	for( i = 1; i < 21; i++){
		printf("2^%d = %f\n", i, pow(2.0,i));
	}
}