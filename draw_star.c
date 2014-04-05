# include <stdio.h>

void drawStar(int min, int max);
void printStar(char c, int numStars);

int main(void)
{
    drawStar(2,5);
    system("pause");
}

void drawStar(int min, int max)
{
             printStar('*',min);

             if(min < max)
             drawStar(min+1, max);
             
             if(min < max)
             printStar('*',min); 
             
             return;            
}

void printStar(char c, int numStars)
{
               int i;
               for(i=0; i<numStars; i++)
               {
                        printf("%c ",c);
               }
               printf("\n");
}
