/* This is the number guessing game program */
/* This program was written in the C programing language 
    By  (randerson112358)
*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>   // Library used for math in this case log() and ciel()

int main(void)
{
	//Declaring Variables to be used
	int lowRange = 1;
	int highRange = 100;
	int possibleGuesses = highRange + lowRange - 1;
	int maxTurns = (int)(log(possibleGuesses)/log(2)) + 1; // = log base 2 of possible guesses by rules of logarithms
	int yourGuess;
	int playerAnswer;
	int countNumTurns = 1;

	printf("Choose a number from %d to %d.\n", lowRange, highRange);
	printf("I will guess your number in %d turns or less.\n\n", maxTurns );

			//This loops through the algorithm
			do{
				possibleGuesses = highRange + lowRange - 1;
				yourGuess = (int) ceil(possibleGuesses / 2.0);

				printf("Is your number %d ?\n",yourGuess );
				printf("Press (1) Yes (2) Guess a lower number (3) Guess a higher number\n");
                                scanf("%d", &playerAnswer);

				if(playerAnswer == 3)//Guess was to low
					lowRange = yourGuess + 1;
				if(playerAnswer == 2) // Guess was too high
					highRange = yourGuess - 1;
				if (playerAnswer == 1)
				    break;

				countNumTurns++;
				
			}while(playerAnswer != 1);

	printf("I guessed your number in %d turns !\n", countNumTurns );
	system("pause"); //This is only for windows operating system otherwise comment it out.
}
