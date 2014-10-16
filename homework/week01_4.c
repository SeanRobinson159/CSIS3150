//Write code that uses a for loop and prints out a list of the squares 
//of n from n=1 to n=100, giving n and n^2  (ex. 3 -> 9). 

#include<stdio.h>
#include<math.h>

int main() {
	int i;
	for(i = 1; i < 101; i++){
		printf("%d^2 = %f\n", i, pow(i, 2));
	}
}