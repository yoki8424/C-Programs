/*
   This is a C program that multiplies 2 integers recursively
   Note: You can use either recursive case
*/

#include <stdio.h>
#include <stdlib.h>// abs()

int mult(int a, int b);

int main(){
	
	int a = 2;
	int b = -7;
	int answer = mult(a, b);
	
	printf("%d x %d = %d \n", a, b, answer);
	return 0;
}

int mult(int a, int b){
	
	//Base Cases
	if(a == 0 || b ==0)
		return 0;
		
	//Handles Positive values
	if(a == 1)
		return b;
		
	if(b == 1)
		return a;
	
	//Handles Negative Values
	if(a == -1)
		return -b;
		
	if(b == -1)
		return -a;
	
	/*	
	//Recursive Case
	if(a >0 && b > 0)//Checks if both values are positive
		return mult(a, b-1) + a; // or we could've wrote mult(a-1, b) + b;
	else if(a > 0 && b < 0) // Checks if a is positive and b is negative
		return mult(a-1, b) + b;
	else if(a < 0 && b > 0)// Checks if a is negative and b is positive
		return mult(a, b-1) + a;
	else if(a < 0 && b < 0)// Checks if both a and b are negative
		return mult(-a, -b -1) + -a; // or we could've wrote mult(-a-1, -b) + -b;
	else
	   return 0;*/
	   
	//Recuresive Case
	if((a >0 && b > 0)  || a < 0 && b < 0) // if (a and b) are either positive or negative
		return mult(abs(a), abs(b)-1) + abs(a);
	else if(a < 0 && b > 0)// if a is negative and b is positive
		return mult(a, b-1) + a;
	else//else b is negative and a is positive
		return mult(a-1, b) + b;
	
}
