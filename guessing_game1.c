# include <stdio.h>
# include<math.h>
# include<time.h>

int low, high;
 
int bigNum();
int logBase2(int n, int base);// a function for log base2 of n (Worst Case)---> O(log n)

int main(void)
{
    int turn = 1;
    int opponent;
    
    printf("************************************\nWelcome to Rodney's guessing game !\n************************************\n\n");
    
    printf("Enter a range of numbers from low to high \n");
    printf("Low: ");
    scanf("%d", &low);
    printf("High: ");
    scanf("%d", &high);
    
    bigNum(); // checks which number is bigger 
    int guess = (low + high)/2;// starts the guess in the middle 
    
    printf("I will guess your number in %d turns or less\n\n", logBase2(high - low, 2));// teslls how many turns at max needed logbase2(n)
    
    printf("Choose a number between %d and %d\n\n", low, high);
    
    
    do {
        printf("#%d) Is your number %d (1)yes (2)Higher (3)Lower ? ", turn, guess);
        scanf("%d", &opponent);
        
       
                   
                    
                    if(opponent == 2) // if higher
                    {
                                 low = guess;
                                 double x = (((double)guess + (double)high)/2.0);
                                 guess = x;
                                 
                                 if(x > guess)// if (double)x is a number higher than integer guess round up
                                { guess +=1; }
                                 
                                 
                    }
                    else if(opponent == 3) // if lower
                    {
                                  high = guess;
                                  guess = ((low + guess)/2);// always round down
                    }
                    
        
        
        turn++;
    }while(opponent != 1 );
    
    printf("\n\nYeah I guessed it right, I'm a computer that guessed your number in %d turns !!\n", turn-1);
    system("pause");    
}

int bigNum()
{
    if(high < low)
    {
            int tmp = high;
            high = low;
            low = tmp;
    }
}

int logBase2(int n, int base)
{
    double x = log(n) / log(base);
    int y = x;
    
    if(x >= y)// if x is greater than or wequal to y then round up
    return y + 1; // rounding up to the next integer because you can't have a fraction of a turn 
    else 
    return y;
}
