//Description: This program has a function that represents the combination formula
//Combination Formula:
// nCr = n! / (r!(n-r)!)

#include<stdio.h>

//Declare Functions
int combination(int n, int r); // Combination function
int factorial(int x); // Factorial function

int main(){
	
	/*How many ways can a team of 3 people be formed from a group of 6 people ? */
	printf("Answer = %d \n", combination(6,3));
		
	return 0;
}

//Example: 5! = 5 * 4 * 3 * 2 * 1
//Example: 0! = 1
int factorial(int x){
	
	int i;
	int fact = 1;
	
	for(i=x; i>= 1; i--){
		fact = i * fact;
	}
	
	return fact;
}

//Combination Formula:
// nCr = n! / (r!(n-r)!)
int combination(int n, int r){
	
	return factorial(n)/ (factorial(r)*factorial(n-r)); 
}
