/**
 This program reverses the letters in a word
*/
# include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printReverseStr(char* ch);

int main(void){
	char* word = "hello world";
	printReverseStr(word); // This function prints the string in reverse 

}

void printReverseStr(char* ch){
    
	int wordLength = strlen(ch);
	
	int i;
	for(i=wordLength -1 ; i>= 0; i--){
		printf("%c", ch[i]);
	}
}
