# include <stdio.h>
# include <math.h>

/* This program shows factors for a quadratic
   equation using the quadratic formula 
   
   created by: Rodney T. Anderson
*/
int main(void) 
{
    int a,b,c;
    int x1,x2;
    
    printf("Quadratic equation in the form: Ax^2 + Bx + C = 0\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d",&c);
    
    
    if(b*b < 4*a*c) // its an  imaginary  number
    {
           printf("Non real number \n");
           x1 = (-b+sqrt(4*a*c- b*b))/ (2*a);// quadratic equation 
           x2 = (-b-sqrt(4*a*c -b*b  ))/ (2*a);// quadratic equation 
           
           printf("\nfactors for the equation is : ");
           printf("(x + %d)(x + %d)\n", -1*x1, -1*x2);
           
           printf("\nx = %di, y= %di\n\n", x1,x2);
    }
    else // else if its real number
    {
         x1 = (-b+sqrt(b*b - 4*a*c))/ (2*a);// quadratic equation 
         x2 = (-b-sqrt(b*b - 4*a*c))/ (2*a);// quadratic equation 
         
         printf("\nfactors for the equation is : ");
         printf("(x + %d)(x + %d)\n", -1*x1, -1*x2);
         
         printf("\nx = %d, x= %d\n\n", x1,x2);
    }
    

    system("pause");
}
