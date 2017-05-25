/*
  This program prints all of the possible substrings of a word
  and calculates the number of the substrings
  By: randerson112358
  4/13/14
*/

# include<stdio.h>
# include<string.h>

int main(void)
{
    char* string = "ABCDEFGH" ;
    int length = strlen(string);
    int i,j,k;
    
    //Calculating the number of possible substrings
    int numSubstring = ( length * (length +1) )/ 2;
    
    //Print the possible number of substrings
    printf("The number of substrings in the word %s is %d\n\n", string,numSubstring);
    
    //Printing the string substrings
    for(k=0; k<length; k++){
     for(i=0; i<length; i++){
       for(j=k; j<length-i; j++){
               printf("%c",string[j]);
               
               if(j+1 >=  length-i)
                 printf("\n");
       }
      }
    printf("\n");
    }
    
    system("pause");
}
