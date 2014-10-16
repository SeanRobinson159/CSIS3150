// Write a word count macro

#include <stdio.h>

int main () {
	int chars = 0, lines = 0, words = 0;
	int n, boolean;
	
	while ((n = getchar()) != EOF){
		chars++;
		if(n==' ' || !e(getchar())){
			words++;
		} if ( n=='\n'){
			lines++;
		} if (n=='-'){
			words--;
		}
	}
	
	printf("Lines\tWords\tCharacters\n");
	printf("%d\t%d\t%d\t", lines, words, chars);
	
}