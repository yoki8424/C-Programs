# include <stdio.h>

int gcd(int a, int b); // where a < b
int main(void)
{
    int a,b;
    printf("This program returns the Greatest Common Denominator of integers a, and b\n");
    printf("Input a:");
    scanf("%d", &a);
    printf("Input b:");
    scanf("%d", &b);
    
    printf("%d is the greatest common denominator\n", gcd(a,b));
    system("pause");
}
int gcd(int a, int b)
{
    if(b < a) // a check to make sure a <= b
    {
         int temp = a;
         a = b;
         b = temp;
    }
    
    if(a == 0)
    return b;
    else
    return gcd(b%a, a);
}
