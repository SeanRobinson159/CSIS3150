// Write and test a function that simulates the rolling of two dice.  
// It should take an integer n that determines how many times the dice are 
// rolled then print a list showing the number of each possible outcome.

#include<stdio.h>
#include<time.h>

int outcome[7];


void main() {
	srand(time(NULL));
	int rolls;
	int i;
	printf("How many times do you want to roll the 2 dice? ");
	scanf("%d", &rolls);
	while(rolls > 0){
		int d1 = (rand()%6)+1;
		int d2 = (rand()%6)+1;
		outcome[d1]++;
		outcome[d2]++;
		rolls--;
	}
	for(i = 1; i < 7; i++){
		printf("%ds:\t%d\n", i, outcome[i]);
	}
}