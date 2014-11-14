%option noyywrap
%{
	#include <stdio.h>
	FILE *fp;
%}
%% 
[^\n<>''/]* {fprintf(fp,"%s\n",yytext);};
.|\n    ;
%%
main(){
	fp=fopen("strippedHTML.txt", "w+");
	yylex();
}