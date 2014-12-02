%option noyywrap
%{
	#include <stdio.h>
	FILE *fp;
%}
%%
[^ \t]*  {fprintf(fp,"%s ",yytext);}
.|\n    ;
%%
int main(){
	fp=fopen("simpleAWMT.txt", "w+");
	yylex();
}