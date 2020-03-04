#include<stdio.h>
#include<unistd.h>

int main() {
	char buf[100];
	read(0, buf, 20);
	write(1, buf, 20);	
	return 0;
}
