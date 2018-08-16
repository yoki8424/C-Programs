//Description: This program prints out random multiplication problems 
//and determines how many problems the user got right and wrong

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	
	//Declare  the variables we need
	int x, y; // The variables that we will multiply together
	int answer; // answer = x * y
	int userInput; // This is the users answer
	int right = 0; // The number of problems the user got right
	int wrong =0; // The number of problems the user got wrong
	int numQuestions = 100; // The number of problems we have
	int i; 
	
	for(i=0; i<numQuestions; i++){
		
		//Initialize variables x and y to some pseudo-random value
		x = rand()%10;
		y = rand()%10;
		
		//Initialize the answer
		answer = x * y;
		
		//Print the problem
		printf("%d) %d x %d =  ",i+1, x, y);
		
		// Ask the user for their answer
		scanf("%d", &userInput);
		
		if(userInput == answer)
			right++;
		else
		    wrong++;
		
	}
	
	printf("You got %d questions right and %d questions wrong \n", right, wrong);
	
	
	return 0;
}
