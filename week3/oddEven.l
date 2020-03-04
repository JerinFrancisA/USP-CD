%{
#include<stdio.h>
#include<stdlib.h>
int n;
%}

%%
[0-9]+ { n=atoi(yytext); if(n%2==0) printf("%d is an even number\n", n);	
			 else printf("%d is odd number\n",n);}
. ;

%%

main(){
yyin=fopen("number.txt","r");
yylex();
fclose(yyin);
}
