/*
    This program prints all of the possible substrings of a word
    and calculates the number of substrings
    
    Example:
    "CAT"
    
    Possible sustrings: CAT, CA, C, AT, A, T
    number of substrings: 6
    
    Formula to calculate the number of substrings:
    where   n=number of letters
    n(n+1) / 2  
    e.g. 3( 3 + 1) / 2 = 3(4)/2 = 12/2 = 6
    
    
    
*/

#include <stdio.h>
#include <string.h> //strlen()

int main(){
	
	char* string = "CAT";
	int length = strlen(string);
	int i,j,k;
	
	//Calculate the number of substrings
	int numSubstring = length * ( length + 1) / 2;

	printf("The number of substrings in the word %s is %d \n\n", string, numSubstring);
	printf("The substrings are: \n");
	
	//Print All Of The Possible Substrings
	for(i=0; i<length; i++){
		for(j=0; j< length-i; j++){
			for(k=i; k < length -j; k++){
				printf("%c", string[k]);
			}
			printf("\n");
		}	
	}
	
	return 0;
}
