/*
	This program takes a string (sentence or text) as input  
	and count the number of words in the input string
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char words[200];// text that can hold 200 characters
    int i, count = 0;

    printf("Enter the sentence or text:\n");
    fgets(words, sizeof(words),stdin); // Scan in the full text
    
    //Check if the first character is alphabetic
    if(isalpha(words[0]))
      count = 1;
      

    //Loop through the full text until the user hits enter which is the '\0' character
    for (i = 0;words[i] != '\0';i++)
    {
    	//if the text character is a space a.k.a ' ', 
		//then the characters before it must've formed a word 
            if(words[i]== ' '){
            	
            	//Loop through all other spaces if we encounter more than 1
            	while(isspace(words[i])){i++;}
            	
            	//If the next character isn't the enter key then there are more words to count
            	if(words[i] != '\0')
				    count++;
			}   
    }
    
    printf("The number of words in given sentence/text are: %d\n", count);
}
