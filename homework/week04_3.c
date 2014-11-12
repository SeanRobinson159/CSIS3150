// Create and test a Student struct.  It should have 
// first name, last name, major and email address.

#include <stdio.h>
#include <string.h>

struct Student {
	char *firstName;
	char *lastName;
	char *major;
	char *email;
};

int main () {
	struct Student s;
    s.firstName = "Sean";
    s.lastName = "Robinson";
    s.major = "Computer Science";
    s.email = "SeanRobinson159@gmail.com";
	
    printf("First Name: %s\n",s.firstName);
    printf("Last Name: %s\n",s.lastName);
    printf("Major: %s\n",s.major);
    printf("email: %s\n",s.email);

	
}