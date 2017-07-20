/*
  Description: 
  This program uses recursion to return the product of the digits of its integer input parameter
  
  Usage:
  user inputs: 274
  output: 2 * 7 * 4 = 56
  
  Assume that the input is non-negative
*/

//Include Library
#include<stdio.h>

//Recursive Function
int productDigits(int n);

int main(){
	
	int userInput;
	
	printf("input: ");
	scanf("%d", &userInput);
	int output = productDigits(userInput);
	
	printf("Output: %d \n", output);
	
	return 0;
}



int productDigits(int n){
	
	//Base Case
	if( n < 10)
		return n;
		
	//Recursive Case
	return productDigits(n/10) * (n%10);
}
