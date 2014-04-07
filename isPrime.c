/*
This program checks if a number is prime or composite.
Note: Prime number (N) properties
   1) N Belongs to the Natural Set of numbers
   2) N > 1
   3) N | 1 and N | N only (that is N divides 1 and N divides itself only)
   
We only have to check up to sqrt(N) from 2, because if N is not prime it can be factored into two factors (a) and (b) such that N = a * b
if a or b were greater than the square root of N then a*b would be greater than N. So the factors have to be less than or equal to the sqrt(N), and 2 is the next number after 1.

By: Rodney Anderson
4/7/2014

*/

# include<stdio.h>
# include<math.h> // has sqrt() function

int isPrime(int N);// This returns a factor of N if it's prime and returns 0 other wise.

int main(void)
{
	int N;
	
	printf("Enter a number I will tell you if it is prime or composite: ");
	scanf("%d", &N);
	
	if(isPrime)
	  printf("Number %d is prime, one factor is %d\n", N, isPrime(N));
	else
	  printf("Number %d is composite, the only factors are 1 and %d\n", N, N);
	
	system("pause");
}

int isPrime(int N)
{
	int i;
	
	for(i=2; i<=sqrt(N); i++)
		if(N % i == 0)
				return i;
		

	  
	    
	    
	return 0;
}
