/** 
This program adds a digit together recursively e.g. 417 = 4 + 1 + 7 = 12, 
and prints all of the odd digits e.g 417 ==> prints 1 7
and prints the "place" e.g. 417 ==> is in the 100th place, 67 ==> is in the 10th place
*/

# include <stdio.h>

int addNum(int n);
void printOdd(int n);
int place(int n);

int main(void)
{
    int n;
    
    printf("Input number and I will add those digits together for you !\n");
    scanf("%d", &n);
    printf("The odd numbers in that digit are : ");
    printOdd(n);
    printf("\n");
    int answer = addNum(n);
    int b = place(n);
    printf("the numbers added up together  = %d\n, placement = %d\n", answer, b);
    system("pause");
}

int addNum(int n)
{
    if(n < 10)
    return n;
    
    int a= n%10 + addNum(n/10);
    
    return a;
}

void printOdd(int n)
{
    if(n<10)
    {       
            if(n%2 == 1)
            printf("%d ",n);
            
            return ;
    }
    else if( (n%10)%2 == 1)
   { 
         printf("%d ", n%10);
   }
    
    printOdd(n/10);
}

int place(int n)
{
    if(n<10)
    return 1;
    
    int a = place(n/10) * 10;
    
    return a;
}
