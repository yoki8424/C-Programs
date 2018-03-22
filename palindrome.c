//Description: This program determines if a word or string is a palindrome
/*
Example1:
INPUT: "MOM"
OUTPUT: Yes, MOM is a palindrome because the word reversed is the same

Example2:
INPUT: "TOM" 
OUTPUT: No, TOM is NOT a palindrome

*/

#include<stdio.h>
#include<string.h> // strlen()

void isPalindrome(char str[]);

int main(){
	
	isPalindrome("MOM");
	isPalindrome("M");
	return 0;
}


/*
    EX: "MOM" = str['M','O','M'], strlen = 3
    if str[0] != str[strlen-1] then the string is not a palindrome 
    if the above statement is not true (e.g. the characters that we are comparing are the same)
    then increase our left most index '0' , and decrease our Right most index 'strlen-1'
    
    Continue this until the left most index >= Right most index
*/

void isPalindrome(char str[]){
	
	int lm = 0;//left most index
	int rm = strlen(str) - 1;//right most index
	
	while(rm > lm){
		
		if(str[lm++] != str[rm--]){
			
			printf("No, %s is NOT a palindrome \n", str);
			return;
		}
		
	}
	
	printf("Yes, %s is a palindrome because the word reversed is the same \n", str);
	
}
