/*
     Think of a number from 1 to 100, I can guess your number within 7 turns
     
     Is your number 50?
     No, guess a higher number 
     
     Is your number 75 ? 
     No, guess a higher number 
     
     Is your number 88 ? 
     No, guess a lower number 
     
     Is your number 81 ? 
     Yes, you guesed my number within 7 turns specifically 4 turns 
     
     ------------------------------------------------------------------------
     HOW THIS WORKS
     Think of a number from 1 to 100, I can guess your number within logBase2(100 + 1 - 1) == 7 turns
     
     Is your number roundUp(100 + 1 - 1)/ 2 == 50? Range 1 to 100 (100 possible guesses)
     No, guess a higher number        newRange =  51 to 100 (50 possible guesses)
     
     Is your number roundUp(100 + 51 - 1)/2 ==  75? Range 51 to 100 (50 possible guesses)
     No, guess a higher number        newRange = 76 to 100 (25 possible guesses)
     
     Is your number roundUp(100 + 76 -1)/2 == 87.5== 88 ? Range 76 to 100 
     No, guess a lower number         newRange = 76 to 87 (12 possible guesses)
     
     Is your number  roundUp(87 +76 - 1)/2 ==  81 ?     
     Yes, you guessed my number within 7 turns specifically 4 turns 
     
     By:randerson112358
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>// log() and ceil()


int main(void){
	
	//Declare variables
	int lowRange = 1;
	int highRange = 100;
	int possibleGuesses = highRange + lowRange - 1; //Range of possible guesses or numbers left
	int maxTurns = ceil(log(possibleGuesses) / log(2) ); // log base 2 of possible guesses rounded up
	int guess; // The number that the computer guesses
	int player; //(1) yes, you guessed my number, (2) No, guess a lower number, (3) No, guess a higher number
	int numTurns = 1; //Keep track of the number of turns/guesses
	
	printf("Think of a number from %d to %d, I can guess your number within %d turns \n", lowRange, highRange, maxTurns);
	
	//Do a divide and conquer algorithm
	//The actual guessing game
	do{
		//create or update the new range or possible number of guesses
		possibleGuesses = highRange + lowRange - 1;
		guess = (int)ceil(possibleGuesses / 2.0);
		
		printf("Is your number %d ? \n", guess);
		printf("(1) yes, you guessed my number \n");
		printf("(2) No, guess a lower number \n");
		printf("(3) No, guess a higher number \n");
		scanf("%d", &player);// Get the players feed back
		
		
		if(player == 3)
		  lowRange = guess + 1;//Update the new low range
		else if(player == 2)
		  highRange = guess - 1; //update the new high range
		else if(player == 1)
		  break; //break out of the loop, because we guessed the players number
		
		numTurns++; //Increment the number of turns
		
	}while(player != 1 && numTurns <= maxTurns);
	
	//Print the results
	if(numTurns > maxTurns)
	   printf("You made a mistake, you've exceeded the maximum number of turns \n");
	else
	   printf("I guessed your number in %d turns! \n", numTurns);
	
}
