%{
#include<stdio.h>
#include<stdlib.h>
%}

%token A
%token B
%token NL

%%

stmt: S NL { printf("Valid string\n");
                     exit(0); }
;
S : A S | B S |
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

