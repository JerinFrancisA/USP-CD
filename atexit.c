#include<stdio.h>
#include<stdlib.h>

void fun1() {
	printf("first exit function\n");
}

void fun2() {
	printf("second exit function\n");
}

int main(int argc, char * argv[]) {
	atexit(fun1);
	atexit(fun2);

	atexit(fun1);
	atexit(fun2);

	atexit(fun1);
	atexit(fun2);

	atexit(fun1);
	atexit(fun2);

	atexit(fun1);
	atexit(fun2);

	return 0;
}
