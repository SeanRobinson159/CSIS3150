%option noyywrap

%{
#include <stdio.h>
int charCount = 0;
int wordCount = 0;
int lineCount = 0;
int toFile;
%}

word 	[^ \t\n]+
eol		\n
%%

{word}		{wordCount++; charCount += yyleng;}
{eol}		{lineCount++; }
.			{charCount++;}
%%

int main(int argc, char *argv[]) {
	if (argc > 1){
		FILE *inFile;
		inFile = fopen(argv[1], "r");
        if(inFile == NULL){
            perror("Error");
        } else {
            yyin = inFile;
        }
	}
	yylex();
        FILE *outFile;
        outFile=fopen("WordCountOutput.txt", "w+");
        fprintf(outFile, "The number of characters in the file: %d\n", charCount);
        fprintf(outFile, "The number of words in the file: %d\n", wordCount);
        fprintf(outFile, "The number of lines in the file: %d\n", lineCount);
        
	printf("CharCount: %d \nWordCount: %d \nLineCount: %d\n", charCount, wordCount, lineCount);
}