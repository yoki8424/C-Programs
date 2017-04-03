/**
* This program (vigenere.c), encrypts any words the user inputs
*
*  @Author - Rodney T Anderson(randerson112358)
*/


//Initializing the APIs/ Libraries
# include <stdio.h> //has fgets(), printf()
# include <string.h>// has strlen()
# include <ctype.h> //has isupper(), islower(), tolower(), toupper()
# include <stdlib.h> //atoi()

//Declaring vigenere cypher function
void vigenereCypher(char* plainText, char* k);

int main(int argc, char *argv[] ){
    char* k;
    if ( argc != 2  ) // argc should be 2 for correct execution 
    {
         printf("You didn't enter exactly 2 arguments\n");
         return 1;
    }
    k= argv[1];//Assign the key
    int i;
    
    for(i=0; i <strlen(k); i++)
    {
        if(!isalpha(k[i])){
        printf("You didn't enter a valid string with just characters\n");
        return 1;
        }
    }
        
     //Declare a string for a users name assuming the name doesn't exceed 31 characters
    char plainText[101];
    
    //Ask the user for sentence to encrypt
    //printf("Please enter the sentence you want to encrypt:\n");
    
    //Get the users input (the plain text)
    fgets(plainText, sizeof(plainText), stdin);
    
    //Prints the encrypted plain text
    vigenereCypher(plainText, k);
    
    //system("pause");
    return 0;
}

void vigenereCypher(char* plainText, char* k){
     
 ///vigenere Cypher encryption --> C = (p[i] + k[j])% N, k=secret key, p=sentence or plain text, N=the number of letters in the alphabet + 1, C=cypher
  
  int i=0,j=0;
  char cypher;
  int len =strlen(k);
  
 
  //Loop through the length of the plain text string
     for(i=0; i<strlen(plainText); i++)
     {
 
            //if the character is lowercase, where letter range is [97-122]
            if(islower(plainText[i]))
            {              
              cypher = (char)((int)plainText[i]-97 + tolower(k[j%len])-97)%26 +97;
            }
            else //Else it's uppercase, where letter range is [65-90]
            {
               cypher = (char)((int)plainText[i]-65 + toupper(k[j%len])-65)%26 +65;
            }
            //Print the cyphered character if it is alphanumeric (letter)
            if(isalpha(plainText[i]))
            {
               printf("%c", cypher);
               j++;  
            }
            else  //if the character is not a letter then print the character
            {
               printf("%c", plainText[i]);
            }
             
     }
    // printf("\n");//Print a new line
}
