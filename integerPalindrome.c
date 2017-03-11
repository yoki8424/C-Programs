/*
   Description:
   This program checks if an integer is a palindrome meaning the number reversed is the same number 
   
   Palidrome definition:
   It is a word, phrase or sequence that reads the same backward as forward
   
   Example:
   1) 101 reversed = 101 , 101 is a palindrome
   2) 12 reversed = 21,  12 is not a palindrome
   3) 11 reversed = 11, 11 is a palindrome
   
   
*/

//Library
#include<stdio.h>

int main(){
	
	int n;
	int reversedInteger =0;
	int originalNumber;
	int remainder;
	
	printf("Enter an integer: \n");
	scanf("%d", &n);
	
	originalNumber = n;
	
	//reverse integer and store it in reversedInteger
	while( n != 0){
		
		remainder = n%10; 
		reversedInteger = reversedInteger * 10 + remainder;
		n = n/10;
	}
	
	//Check if the reversed number is equal to the original
	if(originalNumber == reversedInteger)
		printf("%d is a palindrome.", originalNumber);
	else
		printf("%d is NOT a palindrome.", originalNumber);
	
	return 0;
}
