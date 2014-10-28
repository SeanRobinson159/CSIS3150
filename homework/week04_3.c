// Create and test a Student struct.  It should have 
// first name, last name, major and email address.

#include <stdio.h>
#include <string.h>

struct Student {
	char firstName;
	char lastName;
	char major;
	char email;
};

int main () {
	struct Student s;
	//s.firstName = "Sean";
	//s.lastName = "Robinson";

	//printf("%s", s.firstName);
	
	printf("Please enter your firstName: ");
	scanf("%s", &s.firstName);
	printf("\nPlease enter your lastName: ");
	scanf("%s", &s.lastName);
	printf("\nPlease enter your major: ");
	scanf("%s", &s.major);
	printf("\nPlease enter your email: ");
	scanf("%s", &s.email);
	
	
}