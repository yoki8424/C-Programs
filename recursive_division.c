/*
   Description: This program uses a recursive function to do division on positive integers
   
   Case 1: 0 / 8 = 0 remainder 0
   Case 2: 6 / 2 = 3 remainder 0
   Case 3: 1 / 2 = 0 remainder 1
   Case 4: 9 / 4 = 2 remainder 1
   
   Case 1: 0 / 8 = 0
           if (numerator < denominator ) return 0
           
   Case 2: 6 / 2 = 3 remainder 0
   6 - 2 = 4 counter 1
   4 - 2 = 2 counter 2
   2 - 2 = 0 counter 3  <-- return 
   
   Ex 2: 8 / 4 = 2 remainder 0
   8 - 4 = 4 counter = 1
   4 - 4 = 0 counter = 2 <-- return 
   
   Case 3: 1 /2 = 0 remainder 1
   if (numerator < denominator) return 0
   
   Case 4: 9 / 4 = 2 remainder 1
   9 - 4 = 5 counter = 1
   5 - 4 = 1 counter = 2 
   1 - 4 = -3
   
   
   
*/

#include<stdio.h>

int recursive_division(int numerator, int denominator);
int recursive_remainder(int numerator, int denominator);

int main(){
	
	int a = 9;
	int b = 4;
    int remainder = recursive_remainder(a,b);
	int answer = recursive_division(a,b);
	
	printf("%d / %d = %d with a remainder of %d \n", a, b, answer, remainder);
	
	return 0;
}


int recursive_division(int numerator, int denominator){
	

	
	//Base Case
	if( numerator < denominator){
		return 0;
	}
	
	
	//Recursive Case
	return recursive_division( numerator - denominator,  denominator) + 1;
}

int recursive_remainder(int numerator, int denominator){
	
	
	
	//Base Case
	if( numerator < denominator){
		return numerator;
	}
	

	//Recursive Case
	return recursive_division( numerator - denominator,  denominator);
}
