/*
  This program reverses an integer number
  By Rodney Anderson
  4/13/14
*/

# include<stdio.h>

int main(void)
{
    int num;
    int reverse_num = 0;
    
    //Get user input
    printf("Enter a number to be reversed\n");
    scanf("%d", &num);
    
    //Store the original number value into orig_name
    int orig_num = num;
    
    //Computation to reverse the original number
    while(num != 0)
    {
              reverse_num = reverse_num * 10;
              reverse_num += num % 10;
              num = num/10;
    }
    
    // Print the original number and the reversed number
    printf("\n%d reversed is %d\n\n", orig_num, reverse_num);
    system("pause");
}
