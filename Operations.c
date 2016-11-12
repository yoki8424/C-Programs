/*
This is a program that does 4 operations, addition, 
subtraction, multiplication, and division. 

written by; 
Rodney T. Anderson
*/

# include <stdio.h> 
# include <stdlib.h> 
# include <math.h> 
# include <time.h>
# include <conio.h>

int correct = 0, wrong = 0;
int choice;
int x,y;
int numProblems;
int lowRange, highRange;


void menu();
void printGrade(int grade);
void changeRandom(int y);

int main(void) 
{
  
   /* Seed random number generator */
    int seed = time(NULL);
    int i;
    double grade;
    double  answer;
    int startTime, endTime;
    
    
    srand(seed);
    
    do{
                
    menu();
    
    if(choice != 0){
    system("cls");// windows clear screen command
    printf("How many problems would you like?\n");
    scanf("%d",&numProblems);
    printf("What's the range of numbers you would like?\n");
    printf("Low range: ");
    scanf("%d",&lowRange);
    printf("High range: ");
    scanf("%d",&highRange);
    
    system("cls");// windows clear screen command
    
     startTime = time(NULL);
    for(i=1; i<=numProblems; i++)
    {        
             x = rand_mid(lowRange,highRange);
             y = rand_mid(lowRange,highRange);
            
             if(choice == 1)//add
             {
                       printf("%d)%d + %d = ", i,x,y);
                       scanf("%lf", &answer);
                       checkADD(x, y, answer);
             }
             else if(choice == 2)//sub
             {
                  if(x < y) // THIS IS SO THERE ARE NO NEGATIVE NUMBERS
                  Switch();
                  
                  printf("%d)%d - %d = ", i,x,y);
                  scanf("%lf", &answer);
                  checkSUB(x, y, answer);
             }
             else if(choice == 3)//mult
             {
                  printf("%d)%d x %d = ", i,x,y);
                  scanf("%lf", &answer);
                  checkMULT(x, y, answer);
             }
            /* else if(choice == 4)//division
             {
                  // FIGURE OUT DIVISION BY 0 PROBLEM FOR BOTH X AND Y!!!!!!!!
                  if(y == 0)
                  changeRandom(y);
                  
                  
                  if(x < y && x !=0 )
                  Switch();
                  
                  if(y == 0)
                  changeRandom(y);
                  
                  
                  printf("%d)%d / %d = ", i,x,y);
                  scanf("%lf", &answer);
                  checkDIV(x, y, answer);
             }*/
             
             
    }//end for loop
    endTime = time(NULL);
    grade = ((double)correct*100 / (double)numProblems) ;
  
    printf("\nCorrect: %d , Wrong: %d \n", correct, wrong);
    printf("Grade: %.1lf ", grade);
    printGrade(grade);
    printf("Total time: %d seconds\n", endTime - startTime);

   correct = 0; 
   wrong = 0; 
   
   system("pause");// windows pause command
    }// end if statement
    }while(choice != 0);
    
    printf("Good Bye\n");
    system("pause");// windows pause command
   
}
//Function Creates random number between low - high 
int rand_mid(int low, int high)
{
    return low+rand()%(high-low+1);
}
//Checks if the multiplication is correct
int checkMULT(int x, int y, double answer)
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
//Checks if the division is correct
int checkDIV(int x, int y, double answer)
{
    printf("ANSWER: %d\n",x/y);
    if(answer == x/y)
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
//Checks if the addition is correct
int checkADD(int x, int y, double answer)
{
    printf("ANSWER: %d\n",x+y);
    if(answer == x+y)
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
//Checks if the subtraction is correct
int checkSUB(int x, int y, double answer)
{
    printf("ANSWER: %d\n",x-y);
    if(answer == x-y)
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
void changeRandom(int y)
{                
                 y = rand_mid(lowRange,highRange);
                 if( y == 0 ) 
                 return changeRandom(y);
                 
                 return;
                 
}
//switches x and y values
int Switch()
{
    int temp; 
    
    temp = x;
    x = y; 
    y = temp;
    
    return 1;
}

void printGrade(int grade)
{
     if(grade  >= 90)
     printf(" A");
     else if(grade  >= 80)
     printf(" B");
     else if(grade  >= 70)
     printf(" C");
     else if(grade  >= 60)
     printf(" D");
     else if(grade  < 60)
     printf(" F");
     
     printf("\n");
}
void menu()
{
     system("cls");// windows clear screen command
     printf("Choose the type of problems you want:\n");
     printf("1)Addition\n");
     printf("2)Subtraction\n");
     printf("3)Multiplication\n");
     printf("4)division\n");
     printf("0)exit\n");
     scanf("%d", &choice);
}

