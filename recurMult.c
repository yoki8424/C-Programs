/*
 This is a recursive program to multiply two numbers
By: Rodney Anderson
4/4/2014
*/

/*** LIBRARY  ******/
# include<stdio.h>


/** FUNCTION ***/
int multiply(int a, int b);// Initializing multiply function 

int main(void){
	
	//The two numbers to be multiplied together
	int x,y;
	int result; // result = x * y
	
	//Ask user to input 2 numbers to multiply together
	printf("Please enter two integers to be multiplied together\n");
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	
	result = multiply(x,y);
	
	//Print the result of x * y to the screen
	printf("\n%d x %d = %d\n", x,y,result);
	
	
	//Comment the System("pause") if you are not on a Windows OS
	system("pause");
}

//This is a recursive function to multiply 2 numbers
int multiply(int a, int b){
	
	//Base Case
	if(a== 0 || b== 0)
	  return 0;
	  
	return a+multiply(a,b-1);
}
