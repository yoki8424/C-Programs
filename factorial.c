/*

 This program outputs the factorial of a number e.g. 5! = 5 * 4 * 3 * 2 * 1 = 120.
 In general n! = n * n-1 * n-2* ... * 3 * 2 * 1
 By: Rodney Anderson
 
 */

# include<stdio.h>

int fact_recursive(int n);// This is a recursive factorial function
int fact_iterative(int n);// This is a iterative factorial function

int main(void)
{
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	printf("%d! = %d\n", n, fact_iterative(n));
	
	system("pause");
}

fact_recursive(int n)
{
	//Base Case
	if(n == 0)
	return 1;
	
	return n *fact_recursive(n-1);
}

int fact_iterative(int n)
{
	int i;
	int product = 1;
	for(i = 1; i<= n; i++)
	{
		product = product * i;
	}
	
	return product;
}
