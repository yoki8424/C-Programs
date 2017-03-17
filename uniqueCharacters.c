/*
  This program implements an algorithm to determine if a string has all unique characters
*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char array[]= {"abcdefghijklmnopqrstuvwxyz"}; // Array of characters
	int len = strlen(array); // the length of the array
	int isUnique = 1; // Setting isUnique to true
	
	//This is the algorithm that will determine if our array is unique
	int i,j;
	for(i=0; i<len; i++){
		for(j=0; j<len; j++){
			
			//Checking if the indexes are different if they are then we will compare the element at position i with the element at position j
			if(i != j){
				// Comparing elements in the array with other elements in the array if these are equal then the array of characters are not unique
				if(array[i] == array[j]){
					
					isUnique = 0; // Updating isUnique variable to be equal to 0 to represent false 
				}
			}
		}
	}
	
	
	if(isUnique == 1){
		printf("All of the characters are unique. \n");
	}
	else
		printf("All of the characters are NOT unique. \n");
	
	return 0;
}
