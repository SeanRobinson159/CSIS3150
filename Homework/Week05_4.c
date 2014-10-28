// Looking at the list of DOS commands, test 
// 6 more commands executed within a C program.

#include <stdio.h>

int main(){
	printf("***This is your Network info:***\n");
	system("ipconfig");
	printf("\n***Here is the tree***\n");
	system("TREE");
	printf("***Changing the color to White and Black***\n");
	system("COLOR F0");
	printf("***Showing shutdown info***\n");
	system("shutdown");
	printf("***Killing widgets...***\n");
	system("taskkill /f /im xwidget.exe");
	printf("***Opening an explorer window in current location***");
	system("start .");	
}