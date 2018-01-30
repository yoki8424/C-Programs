//This program takes in a word and returns that word without the vowels (a,e,i,o,u,y)
//Example: Input = "hello"
//         Output = "hll"

//Library
#include<stdio.h>

//Function
int isAVowel(char c);

int main(){
	
	char *word = "bitcoin";
	int size = 7;
	int i;
	
	for(i=0; i<size; i++){
		
		if( isAVowel(word[i]) == 0)
		   printf("%c", word[i]);
	}
	
	return 0;
}
//This function will return 1 if the character is a vowel and 0 otherwise
int isAVowel(char c){
	
	char arr[]= {'a','e','i','o','u','y'};
	int size = 6;
	int i;
	
	for(i=0; i<size; i++){
		
		//If the character is one of the characers in the array at index i
		//Then exit the function and return 1
		if( c == arr[i])
		   return 1;
	}
	
	
	return 0;
}
