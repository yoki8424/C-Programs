/*
  This program prints all of the possible substrings of a word
  and calculates the number of the substrings
  By: randerson112358
  7/28/17
*/

# include<stdio.h>
# include<string.h>

void printStr(int begin, int end, char* str);

int main(void)
{
    char* string = "Rod" ;
    int length = strlen(string);
    int i,j,k;
    
    //Calculating the number of possible substrings
    int numSubstring = ( length * (length +1) )/ 2;
    
    //Print the possible number of substrings
    printf("The number of substrings in the word %s is %d\n\n", string,numSubstring);
    

      for(i=0; i<length; i++){
      	for(j=0; j<length-i; j++){
      		printStr(i, length-j, string);
		  }
	  }
      
    system("pause");
}

//Prints the string from the start location to the finish location
void printStr(int begin, int end, char* str){
	int i;
	
	for(i=begin; i<end; i++)
	   printf("%c", str[i]);
	   
	printf("\n");
}
