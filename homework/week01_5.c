//Write a function that prints out if an integer is even or odd.  
//Test it on 4 different integers.

#include<stdio.h>

int main() {
	int a[4] = {1,2,3,4};
	int i;
	for(i = 0; i < 4; i++){
		if(a[i]%2 == 0){
			printf("%d is even.\n", a[i]);
		} else {
			printf("%d is odd.\n", a[i]);
		}
	}
}