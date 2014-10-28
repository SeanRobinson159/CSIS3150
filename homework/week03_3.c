//Write a program that leaks a lot of memory. 
//It should be printing out how much memory was used 
//until it crashes.  How much memory was used 
//before it crashed?

#include <stdio.h>
#include <stdlib.h>

int main () {
	int memory;
	int *memoryArea;
	while(2==2){
		printf("Memory: %d KB\n", memory);
		memoryArea = malloc(2000);
		*memoryArea = 1000;
		memory +=2;
			
	}
}