/*
  This program generates a NxN multiplication  table
  By: randerson112358
  4/4/2014
*/

# include<stdio.h>

int main(void){
	
	int i , j;
	int n = 16;
	
	//prints the columns
	printf("%4c |", ' ');
	for(i=0; i<=n; i++)
	  printf("%4d", i);
	  
	  printf("\n");
	
	//Prints the Multiplication table
	for(i=0; i<=n; i++)
	  {
	  	printf("%4d |", i); // prints the rows
	  	for(j=0; j<=n; j++)
	  	{
	  		printf("%4d", i*j); //  %4d for aligning the text on screen
	  	}
	  	printf("\n");
	  }
	
	system("pause");
}
