//

#include <stdio.h>
#include <stdlib.c>

int main (int argc, char *argv[]) {
	double num;
	int i;
	
	for(i = 0; argv[i] != NULL; i++){
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	printf("argc = %d\n",argc);
}
