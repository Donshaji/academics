%{
#include<stdio.h>
#include<stdlib.h>
%}

%token A B C D NL

%%
stmt: S NL { printf("valid string\n"); 
			exit(0); } 
;
S: A S D | Q ;
Q: B Q C| B C
;

%%

int yyerror(char *msg)
{
    printf("invalid string\n");
    exit(0);
}

int main()
{
    printf("Enter the string\n");
    yyparse();
    return 0;
}
