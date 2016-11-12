/*
   This program returns the integral of a function in the form of Cx^n
   By: randerson112358
*/

# include <stdio.h>

int main(void) 
{
    char variable[31];
    int constant;
    int power;
    int i;
    int d;
    int multC = 1;
    
    printf("Input Cx^n, C, LETTER, 2;\n");
    printf("C: ");
    scanf("%d", &constant);
    printf("x: ");
     scanf("%s", variable);
    printf("n: ");
     scanf("%d", &power); // if power + d <= 0, then its a natural log
     printf("What integral?\n");
     scanf("%d", &d);
     
     if(power < 0) // natural log
     {
             printf("ln(%s^%d)\n", variable, power); 
     }
     else{
     for(i=0; i<d; i++)
     {
              multC*=(power + i +1);
     }
     printf("%d/%d * %s^(%d)\n", constant,multC, variable, power + d);}
    
    
    system("pause");
    
    
}
