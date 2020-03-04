#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *f1, *f2;
	char src[100], rec[100];
	printf("Enter src file name : ");
	scanf("%s", src);
	
	f1 = fopen(src, "r");
	if(f1 == NULL) {
		exit(0);
	}

	printf("Enter rec file name : ");
	scanf("%s", rec);
	
	f2 = fopen(rec, "w");
	if(f2 == NULL) {
		exit(0);
	}

	char c;
	    while (c != EOF) 
	    { 
		c = fgetc(f1); 
		fputc(c, f2);
	    } 

}
