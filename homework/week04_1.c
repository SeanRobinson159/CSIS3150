// Referring to the cplusplus docs on the cstring library, 
// write a test driver for the following string methods: 
// strcat, strcmp, strlen, strtok.

#include <stdio.h>
#include <string.h>

void stringCat ();
void stringComp ();
void stringLen ();
void stringTok ();


int main () {
	stringCat();
	stringComp();
	stringLen();
	stringTok();	
}

void stringCat (){
	printf("\n\n\t***We are going to try strcat***\n");
	char str[100];
	stpcpy(str, "Number one + ");
	strcat(str, "Number two + ");
	strcat(str, "Number three + ");
	strcat(str, "Number four ");
	puts (str);
}

void stringComp (){
	printf("\n\n\t***We are going to try strcmp***\n");
	char favorite[] = "Italian";
	char guess[80];
	while (strcmp (favorite, guess) != 0){
		printf("Guess my favorite food? ");
		fflush(stdout);
		scanf("%79s", guess);
	}
	puts("Correct!");
}

void stringLen (){
	printf("\n\n\t***We are going to try strlen***\n");
	char str1[80];
	printf("Enter a string ");
	fflush(stdout);
	scanf("%79s", str1);
	
	printf("The string you entered is %u characters long.\n", (unsigned)strlen(str1));
}

void stringTok (){
	printf("\n\n\t***We are going to try strtok***\n");
	char str[] = "Sample text, . Sample2-text2.";
	char *chptr;
	printf("We are going to split \"%s\" into tokens:\n", str);
	chptr = strtok (str, " ,.-");
	while (chptr != NULL){
		printf("%s\n", chptr);
		chptr = strtok (NULL, " ,.-");
	}
}
