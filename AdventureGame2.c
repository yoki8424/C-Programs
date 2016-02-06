# include <stdio.h>// defines scanf() and printf()
# include <math.h>//has math functions; exp(x,y)
# include <stdlib.h>//defines rand()
# include <string.h>//
# include <time.h>//defines time()


int n = 10;

char arr[10][10];
int iPlayerPosition=0, jPlayerPosition=0;

//Functions 
int movePlayer(int playersMove, char arr[][10], int iPosition, int jPosition);
int moveCheck(int playersMove, char arr[][10], int iPosition, int jPosition);
int wallCheck(int playersMove, char arr[][10], int iPosition, int jPosition);
int moveCheck2(int playersMove, char arr[][10], int iPosition, int jPosition);



int main(void)
{
    int seed = time(NULL);
    srand(seed);// seeding random 
    
    int playersMove;
    int i,j,k;
    int iRandom=rand()%n + 0 , jRandom =rand()%n + 0; // iRandom and jRandom range from 0 to 9;
    int TRUE;
    
    
    /////////////////////******************************* Setting up the grid *********//////////////////////////////////////////////
     // placing 0's into the array just to fill the gird and to know which are empty , so any array with a 0 is considered empty
   for(i=0; i<n; i++)
     for(j=0; j<n; j++)
       {
                  arr[i][j] = '0'; 
       }//*/
    
    
    arr[0][0] = 'P';// starting P "the player" at the top left of the grid / board
    arr[n-1][n-1] = 'T';// Placing the treasure on the bottom left of the board
    
   
    for(k=0; k < n*(.5); k++)// the percentage of 'X' on the grid is 5%
    {
             if(arr[iRandom][jRandom] == '0')
             {
                                         arr[iRandom][jRandom] = 'X';
                                         //printf("arr[%d][%d] = %c\n", iRandom, jRandom, arr[iRandom][jRandom]);
                                         iRandom = rand()%n + 0; // iRandom ranges from 0 to 9
                                         jRandom = rand()%n + 0;// jRandom ranges from 0 to 9
             }                     
              //*/  
    }
    
   for(k=0; k < n*(.10); k++)// the percentage of '*' on the grid is 10%
    {
             if(arr[iRandom][jRandom] == '0')
             {
                                          arr[iRandom][jRandom] = '*';
                                         iRandom = rand()%n + 0; // iRandom ranges from 0 to 9
                                         jRandom = rand()%n + 0;// jRandom ranges from 0 to 9
                                        
             }  
    }
    
    
   //FILLING UP THE REMAINDING SPOTS
     for(i=0; i<n; i++)
         for(j=0; j<n; j++)
       {
                   if(arr[i][j] == '0')
                  arr[i][j] = '.'; 
       }//*/  
   
    
    ///////////////////////////////////////////////////////////////////END SETTING UP THE BOARD//////////////////////////////////////////
 char c;
   do{
        printf("Welcome to the Adventure Game 8=up,2=down,4=left,6=right\n");
        printf("X-BLOCK, *-DIE, T-TREASURE, P-PERSON\n");
        printf("Object of the game is to get to the treasure\n\n");
   for(i=0; i<n; i++)
   {
     for(j=0; j<n; j++)
       {
                  printf("%c ", arr[i][j] ); 
       }
       printf("\n");
     }
      
     printf("Enter your move: ");
     scanf("%d", &playersMove);
   
     //printf("players move is %c\n", playersMove);
      TRUE = movePlayer(playersMove, arr, iPlayerPosition, jPlayerPosition);
     
     
     system("cls");
     }while(TRUE != -1 &&TRUE != 2);
    
     
     
    system("pause");
}

///////////////////////////////////////////////////////////FUNCTIONS//////////////////////////////////////////////////////////////
int movePlayer(int playersMove, char arr[][n], int iPosition, int jPosition)
{
    int tempi = iPosition;
    int tempj = jPosition;
    int TRUE;
    
   // printf("players move is %c\n", playersMove);
    if(playersMove == 8)
    {//printf("move up\n");
                   iPlayerPosition -= 1;
    }
    else if(playersMove ==2 )
    {//printf("move down\n");
                   iPlayerPosition += 1;
    }
    else if(playersMove == 6)
    {//printf("move right\n");
                   jPlayerPosition += 1;
    }
    else if(playersMove == 4)
    {//printf("move left\n");
                   jPlayerPosition -= 1;
    }
    
    TRUE = moveCheck(playersMove, arr, iPlayerPosition, jPlayerPosition);
    if( TRUE == 1 && wallCheck(playersMove, arr, iPlayerPosition, jPlayerPosition) == 1)
    {
    //swap arrays
    char temp = arr[tempi][tempj];
    arr[tempi][tempj] =arr[iPlayerPosition][jPlayerPosition];
    arr[iPlayerPosition][jPlayerPosition] = temp;
   
    return TRUE;
    }
    else
    {
        iPlayerPosition = iPosition;
        jPlayerPosition = jPosition;
        
        return TRUE;
    }
    
}

int moveCheck(int playersMove, char arr[][10], int iPosition, int jPosition)
{
    if(arr[iPosition][jPosition] == 'X')
    {
                                 printf("Can't move there\n");
                                 return 0;
    }
     if(arr[iPosition][jPosition] == '*')
    {
         printf("You Lose, Thank You for Playing\n");
         //system("pause");
         return -1;
    }
    if(arr[iPosition][jPosition] == 'T')
    {
                                 printf("Congratulations you win !\n");
                                 system("pause");
                                 return 2;
    }
    
    return 1;
}

int wallCheck(int playersMove, char arr[][10], int iPosition, int jPosition)
{
    //Handling the corners
    if(iPosition<0 && jPosition<0 && (playersMove== 8 || playersMove==4))
    {
                    printf("Can't move there\n");
                    return 0;
    }
    else if(iPosition<0 && jPosition>9 && (playersMove== 8 || playersMove==6))
    {
                    printf("Can't move there\n");
                    return 0;
    }
    else if(iPosition>9 && jPosition<0 && (playersMove== 2 || playersMove==4))
    {
                    printf("Can't move there\n");
                    return 0;
    }
    else if(iPosition>9 && jPosition<0 && (playersMove== 2 || playersMove==6))
    {
                    printf("Can't move there\n");
                    return 0;
    }
    else// handling the ith rows and jth columns 
    {
           if(iPosition < 0 && playersMove == 8)
           {printf("Can't move there\n");
                    return 0;}
           if(iPosition > 9 && playersMove == 2)
           {printf("Can't move there\n");
                    return 0;}
           if(jPosition < 0 && playersMove == 4)
           {printf("Can't move there\n");
                    return 0;}
           if(jPosition > 9 && playersMove == 6)
           {printf("Can't move there\n");
                    return 0;}
    }
   // printf("iPosition = %d , jPosition = %d\n", iPosition, jPosition);
    //system("pause");
    
    return 1;
}

int moveCheck2(int playersMove, char arr[][10], int iPosition, int jPosition)
{
     if(arr[iPosition][jPosition] == '*')
    {
         printf("You Lose, Thank You for Playing\n");
         return 0;
    }
    
    return 1;
}
