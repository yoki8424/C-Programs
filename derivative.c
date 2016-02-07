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
     scanf("%d", &power); // if the power "n" = 0 then the derivative of C*x^0 = C * d/dx 1 = C*0 = 0
     printf("What derivative?\n");
     scanf("%d", &d);
     
     for(i=0; i<d; i++)
     {
              multC*=(power - i);
     }
     
     printf("%d * %s^(%d)\n", multC*constant, variable, power - d);
    
    //system("dir");
    //system("echo Hello World"); 
    system("pause");
    
    
}
