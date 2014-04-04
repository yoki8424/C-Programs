/* This program adds numbers from 0 to n 
    By: Rodney Anderson 
    4/4/2014
*/

// C Library 
#include<stdio.h>

int main(void){
	
	
	int n, sum;
	
	//Ask user to input a number into n 
	printf("Please insert a number \n");
	scanf("%d", &n);
	
	//Formula for adding consecutive numbers e.g. 1+2+3+...+n
	sum = n*(n+1)/2;
	  
	// Print the range (0 to n) and value (sum) to standard output
	printf("The sum of all the numbers from 0 to %d is %d\n", n,sum);
	
	// Comment this out if you are not using a windows computer
	system("pause");
}
