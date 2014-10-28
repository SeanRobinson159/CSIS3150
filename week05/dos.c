// Using system to execute dos commands

#include <stdio.h>

int main() {
	printf("This is your present working directory:\n");
	system("cd");
	printf("This is your PATH:\n");
	system("PATH");
	printf("This is the date:\n");
	system("date /T");
	printf("This is your present working directory:\n");
	system("cd");
	printf("This is your directory listing:\n");
	system("dir");
	//system("start .");
	printf("This a pause:\n");
	system("timeout 5");
}