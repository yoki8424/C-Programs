/*
  This program determines if a number is an integer or not
  By; Rodney Anderson
  4/7/14
  
*/

# include<stdio.h>

int isInt(double n);

int main(void)
{
	double n;
	
	printf("Input a number to determine if it is an integer or not: ");
	scanf("%lf", &n);
	
	if(isInt(n) == 1)
	 printf("%d is an integer\n", (int)n);
	else
	 printf("%lf is not an integer\n", n);
	system("pause");
}

int isInt(double n)
{
	if((int) n - n == 0) // Then it's n is an integer
	  return 1;
	else // n is not an integer
	  return 0;
}
