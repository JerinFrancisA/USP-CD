#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[]) {
	if(argc>=2 && argc<=4) {
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
		printf("%d %d", a, b);
		if(argv[2] == '+') {
			printf("\nANSWER %s %s %s = %d\n", argv[1], argv[2], argv[3], a + b);
		}
		if(argv[2] == '-') {
			printf("\nANSWER %s %s %s = %d\n", argv[1], argv[2], argv[3], a - b);
		}
		if(argv[2] == '*') {
			printf("\nANSWER %s %s %s = %d\n", argv[1], argv[2], argv[3], a * b);
		}
		if(argv[2] == '/') {
			printf("\nANSWER %s %s %s = %d\n", argv[1], argv[2], argv[3], a / b);
		}
	}
}
