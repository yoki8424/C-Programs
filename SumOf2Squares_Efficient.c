//Description: This program take in a number and returns two numbers, that when they are squared, they equal the input Number
//  That is to say that we will take in a number (N) and return two numbers (a) and (b), such that a^2 + b^2 = N, and if a^2 + b^2 != N then print N is not a summation of two perfect squares
/*
Example: 
Input = 58
Output = 3 and 7 
Reasoning is because 3^2 + 7^2 = 58

How the algorithm works:
if  a^2 + b^2 = N then 
a^2  = N - b^2 ==> a = sqrt( N - b^2) AND b^2 = N - a^2 ==> b = sqrt(N - a^2)

So...
a = sqrt(N - b^2) , so if b iterates , a will also change

*/

//Library
#include<stdio.h>
#include<math.h> // pow(), sqrt()

int main(){
	
	int i; // The variable to iterate through the loop
	int a, b; 
	int N = 166; // The input number
	
	for(i=1; i<=N; i++){
		b = i;
		a = sqrt(N - pow(b,2));
		
		//Check if a^2 + b^2 == N
		if(pow(a,2) + pow(b,2) == N){
			printf("%d^2 + %d^2 = %d \n", a, b, N);
			return 0; //exits out of the program
		}
	}
	
	printf("%d is not a summation of two perfect squares \n", N);
	
	return 0;
}
