%option noyywrap
%% [^ \n<>"]* printf("%s\n",yytext);
.|\n    ;
%%
main(){  yylex(); }