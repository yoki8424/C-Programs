

#include<stdio.h>
#include<string.h>

int main(){
	
	//Create two strings to be concat
	char string1[100];
	char string2[100];
	
	//Ask the user to enter the first string
	printf("Enter the first string: ");
	
	//Get the users input
	gets(string1);
	
	//Ask the user to enter the second string
	printf("Enter the second string: ");
	
	//Get the users input
	gets(string2);
	
	//Concat the two strings
	strcat(string1, string2);
	
	//Print the concated string
	printf("String concatenation is %s \n", string1 );
	
	return 0;
}
