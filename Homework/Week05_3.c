// Looking at the list of DOS commands, test 
// 6 more commands executed within a C program.

#include <stdio.h>

int main(){
	system("ipconfig");
	//printf("This is your PATH:\n");
	system("cd %ProgramFiles%");
	//printf("This is the date:\n");
	system("dir");
	//printf("This is your present working directory:\n");
	system("cd");
	//printf("This is your directory listing:\n");
	system("dir");
	//system("start .");
	printf("This a pause:\n");
	system("timeout 5");
}