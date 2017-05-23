/*
   Description: This program takes in a string and capitalizes the string
*/

//Include Libraries
#include<stdio.h>
#include<string.h> //strlen()
#include<ctype.h>// tolower()

//Create function
void lowerCase(char* s);

int main(){
	
	char word[31] = "HELLO";
	
	//Run our function
	lowerCase(word);
	
	//Print out the string/ word
	printf("%s", word);
	
	return 0;
}

void lowerCase(char* s){
	
	int i;
	int len = strlen(s);
	
	for(i=0; i< len; i++)
	   s[i]= tolower( s[i] );
}
