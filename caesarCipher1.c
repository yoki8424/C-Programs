/*
   Title: Caesar Cipher
   Description: This program takes in a plain text and produces a cipher of that text using the Caesar Cipher
   Usage: Please enter the plain text you want to encrypt: defend
          The ciphered text is with (key shift = 1): efgfoe
          
   How it work: Suppose Letter = a = 0, b=1, c=2, d=3, e=4
                key = 1
                ((int)Letter + key) mod 26 ==> returns the ciphered letter as a number, cipherValue
                                           ==> (char)cipherValue = '[some letter]'
                                           
                                           NOTE: ASCII 'a'=97, 'b'= 98, 'c'=99, 'd'=100, 'e'=101 ...
*/

#include<stdio.h>// fget(), stdin
#include<string.h>//stringlen()
#include<stdlib.h>

//Define my Caesar Cipher Function
void caesarCipher(char* plainText, int key);

int main(void){
	
	int key = 1;
	char plainText[101];
	
	//Ask the user for the plain text to encrypt
	printf("Please enter the plain text you want to encrypt: ");
	
	//Get the users text input and store it in plainText variable
	fgets(plainText, sizeof(plainText), stdin);
	
	//Print the ciphered text
	printf("The ciphered text is : ");
	
	//Print the ciphered text
	caesarCipher(plainText, key);
	
	system("pause"); // Comment out if you are not using windows OS
}

void caesarCipher(char* plainText, int key){
	
	int i=0;
	int cypherValue;
	char cypher;
	
	while( plainText[i] != '\0' && strlen(plainText)-1 > i){
		cypherValue = ((int)plainText[i] -97 + key) % 26 + 97;
		cypher = (char)(cypherValue);
		
		printf("%c", cypher);
		i++;
	}
	printf("\n");
}
