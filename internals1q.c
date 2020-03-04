#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<dirent.h>

int main(int argc, char * argv[]) {
	DIR *dp;
	struct dirent *dirptr;
	if(argc == 2) {
		if((dp = opendir(argv[1])) != NULL) {
			printf("open success\n");
			while((dirptr = readdir(dp)) != NULL) {
				struct stat buf;
printf("%s", dirptr->d_name);
				if((lstat(dirptr->d_name, &buf)) < 0) {
		exit(0);
}{
					
					if(S_ISREG(buf.st_mode)) 								
						printf("regular file \n");
					else
						printf("%s : directory\n", dirptr->d_name);	
				}
			}		
		}
	}
}
