/*
    This program will decide if two strings are anagrams or not
    
    Defintion Anagram = Two different words that have the same letters but different orders
    Example DOG, and GOD
    
    How it works: 
    sort(DOG) = DGO
    sort(GOD) = DGO
    
    Check if sort(DOG) == sort(GOD)
    
*/

#include<stdio.h>
#include<string.h>

//Sorting Funciton to sort the words 
void sort(char str[]);

int main(){
	
	char str1[]= {"dog"};
	char str2[]= {"god"};
	
	//Sort the words
	sort(str1);
	sort(str2);
	
	if( strcmp(str1, str2) == 0 )
		printf("The strings are anagrams \n");
	else
		printf("The strings are NOT anagrams \n");
	
	return 0;
}

void sort(char str[]){
	
	int i,j,temp;
	int len = strlen(str);
	
	//Sort Array
	for(i=0; i<len; i++)
		for(j=0; j< len; j++)
			if( str[i] < str[j]){
				
				//Swap the characters
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}	
}
