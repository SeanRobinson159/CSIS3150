//Write a program that leaks a lot of memory. 
//It should be printing out how much memory was used 
//until it crashes.  How much memory was used 
//before it crashed?

#include <stdio.h>
#include <stdlib.h>

int main () {
	double memory;
	int *memoryArea;
	while(2==2){
	
	//I don't think I am doing this right....
		memoryArea = (int *)malloc(2000);
		*memoryArea = 2342;
		//memory +=0.002;
		//if(memory / 1000.0 == 0.0){
		//	printf("Memory: %f MB\n", memory/1000);
		//}
	}
}