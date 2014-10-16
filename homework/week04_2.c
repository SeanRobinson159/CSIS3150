// 2.	Write a program called “sum” that, when run from 
// the command line sums all the numbers listed, ex., 
// sum 1 2 3 4 would give 10.  (Hint: use the command atoi.)

#include <stdio.h>
#include <stdlib.h>

int sum (char buffer[256]);

int main () {
	char buffer[256];
	int total = 0, i;
	printf ("Enter numbers to be added. (Seperate by a space)\n");
	scanf("%c", &buffer);
	for(i = 0; i < 256; i++){
		if(buffer[i] != ' '){
			total = total + atoi(buffer[i]);
		}
	}
	
	printf("The value entered is %d.", total);
}