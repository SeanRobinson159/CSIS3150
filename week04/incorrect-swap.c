//

#include <stdio.h>

void swap (int x, int y);

int main () {
	int x = 1;
	int y = 123;
	
	printf("Before swapping X = %d Y = %d \n", x, y);
	swap(x, y);
	printf("After swapping X = %d Y = %d \n", x, y);

	}
	
void swap(int x, int y){
	int temp = x;
	x = y;
	y = temp;
}
