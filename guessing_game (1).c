/*
NAME:VALENTINE OTIENO OGUTU
REG NO:PA106/G/28813/25
DATE:8th Oct 2025
DESCRIPTION:A guessing game program, prompting the user to enter 
			any number from 1 - 20
*/

#include <stdio.h>

int main()
{
	//declare a secret number between 1 and 20
	int secret_number = 12;
	int guess;
	int attempts = 0;
	
	printf("WELCOME TO VALENTINES GUESSING GAME\n");
	printf("I'm thinking of a number between 1 and 20.\n");
	
	while(guess != secret_number) {
		printf("Enter your guess: ");
		scanf("%d", &guess);
		attempts++;
		
		if(guess>secret_number){
			printf("Too high!\n");
		}
		else if(guess<secret_number){
			printf("Too low!\n");
		}
		else
		{
			printf("congratulations!\n");
			printf("It took you %d attempt(s).\n", attempts);
		}
	}
	
	
	return 0;

}
