%{
#include<stdio.h>
#include<stdlib.h>
%}

%token A
%token B
%token C
%token NL

%%

stmt: S NL { printf("Valid string\n");
                     exit(0); }
;
S: A S A | B S B | C
;
%%

int yyerror(char *msg)
{
    printf("invalid string %s \n",msg);
    exit(0);
}

int main()
{
    printf("Enter the string\n");
    yyparse();
    return 0;
}

