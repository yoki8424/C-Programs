/*
   Description: implement an algorithm to determine if a string has all unique characters
*/

//Library
#include<stdio.h>
#include<string.h> //contains the strlen()

//Declare Function
int isUniqueChars(char *string); 

int main(){
	
	//Create a string, size 256 assuming the char set is ASCII, if not we can just increase the size
	char string[128] = "helo";
	int isUnique = isUniqueChars(string); //Set this equal to the function that will return a value if the string is unique (1) or not (0)
	
	if(isUnique == 1)
	   printf("The string is unique\n");
	else
	   printf("The string is NOT unique\n");
	
	return 0;
}

/*
   isUniqueChars() function returns 0 if the string is not unique and returns 1 if it is
   This function runs O(n) time.
*/
int isUniqueChars(char *string){
	
	int i;
	int char_set[128]={0}; //Initializing all elements or numbers in the array to 0,
	int len = strlen(string); //Assuming strlen runs O(n) times, we initialize len here so that we dont keep calling the function  in the loop.
	int val;// Declare val which will hold the ASCII value/number of the character
	
	for(i=0; i<len; i++){
		val = (int)string[i];
		
		if(char_set[val] !=0)
		   return 0;
		   
		//Marking the element
		char_set[val] = 1;
	}
	
	return 1; //This returns 1 if the string is unique
}
