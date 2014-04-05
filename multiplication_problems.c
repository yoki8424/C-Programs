/*
This is a multiplication program, it asks the user 
how many multiplication prolblems they would like, 
and asks for the range of numbers they would like. 
It then shows how many they have correct and how many 
they have incorrect, and outputs a grade. 

written by; 
Rodney T. Anderson
*/

# include <stdio.h> 
# include <stdlib.h> 
# include <math.h> 
# include <time.h>
# include <conio.h>

int correct = 0, wrong = 0;

int main(void) 
{
  
   /* Seed random number generator */
  int seed = time(NULL);
  srand(seed);


    int numProblems;
    int lowRange, highRange;
    int x,y, answer;
    int i;
    double grade;

    printf("How many multiplication problems would you like?\n");
    scanf("%d",&numProblems);
    printf("What's the highest range of numbers you would like?\n");
    printf("High range: ");
    scanf("%d",&highRange);
    printf("Low range: ");
    scanf("%d",&lowRange);
    
    for(i=1; i<=numProblems; i++)
    {
             x = rand_mid(lowRange,highRange);
             y = rand_mid(lowRange,highRange);
             
             printf("%d)%d x %d = ", i,x,y);
             scanf("%d", &answer);
             checkMult(x, y, answer);
             
    }
    
    grade = (correct / numProblems) * 100;
    printf("Correct: %d , Wrong: %d \n", correct, wrong);
    printf("Grade: %.1lf %\n", grade);
   
    //system("cls");// windows clear screen command
    system("pause");// windows pause command
}
//Function Creates random number between low - high 
int rand_mid(int low, int high)
{
    return low+rand()%(high-low+1);
}

int checkMult(int x, int y, int answer)
{
    printf("ANSWER: %d\n",x*y);
    if(answer == x*y)
    {
               correct ++;
               return 1; 
    }
    else
    {
        wrong++;
        return 0;
    }
}

