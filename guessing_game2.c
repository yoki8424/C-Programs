# include <stdio.h>
# include <time.h>
# include <stdlib.h>
//# include <math.h>


int main (void)
{
    int seed = time(NULL);
    srand(seed);
    
    int randomNumber = 1 + (rand() % 100);
    int numGuesses = 0;
    int guess;
    
    
    

    
     printf("I'm guessing a random number 1 to 100 can u guess what it is?\nYou have 10 guesses:\n");
    do
    {
               
                scanf("%d", &guess);
                numGuesses ++;
                
                if(guess == randomNumber)
                {
                         printf("Great Job, you guessed my number correctly, in only %d turns\n",numGuesses);
                }
                else if( guess < randomNumber )
                {
                        printf("The number Im thinking of is higher than that.\n");
                }
                else if( guess > randomNumber )
                {
                        printf("The number Im thinking of is lower than that.\n");
                }
                
               
                     
    }while(numGuesses < 10 || guess == randomNumber);
    
    if( numGuesses == 10 )
    {
        printf("Sorry you've exceeded the number of tries to guess the random number %d\n\n", randomNumber);
        printf("You Lose !\n");
    }
    
    
    //system("pause");  
    
}
