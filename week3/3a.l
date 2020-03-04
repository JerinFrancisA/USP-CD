%{
#include<stdio.h>
#include<stdlib.h>
int c=0;
%}

%%
\n {c++;}
["][a-zA-Z0123456789]*["] {ECHO; printf(" : Valid String at line : %d\n", c+1);}
["][a-zA-Z0123456789]* {ECHO; printf(" : Invalid String at line : %d\n", c+1);}
. {}
%%

int main() {
	yyin = fopen("3afile.c", "r");
	yylex();
	fclose(yyin);
	return 0;
}

