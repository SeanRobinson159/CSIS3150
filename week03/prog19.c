//

#include <stdio.h>
#include <math.h>

void toUppercase(char *sptr);

int main () {
	char s[] = "now is the time";
	
	printf("The string before conversion is: %s", s);
	toUppercase(s);
	printf("\nThe string after conversion is: %s\n", s);
}

void toUppercase(char *sptr){
	while (*sptr != '\0') {
		*sptr = toupper(*sptr);
		++sptr;
	}	
}