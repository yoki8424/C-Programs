/*
   This is a program thast adds numbers from 0 to n recursively
   By: Rodney Anderson
   4/4/2014
*/

//C Library
# include<stdlib.h>


//Function
int addToN(int n);

int main(void){
	
int n, sum;
	
	//Ask user to input a number into n 
	printf("Please insert a number \n");
	scanf("%d", &n);
	
	//recursive function for adding consecutive numbers e.g. 1+2+3+...+n
	sum = addToN(n);
	  
	// Print the range (0 to n) and value (sum) to standard output
	printf("The sum of all the numbers from 0 to %d is %d\n", n,sum);
	
	// Comment this out if you are not using a windows computer
	system("pause");
}

int addToN(int n){
	
	//Base Case
	if(n == 0)
	  return 0;
	  
	return n + addToN(n-1);
}
