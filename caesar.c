/**
* This program (caesar.c), encrypts any words the user inputs
*
*  @Author - Rodney T Anderson(randerson112358)
*/


//Initializing the APIs/ Libraries
# include <stdio.h> //has fgets() , printf()
# include <string.h>// has strlen()
# include <ctype.h> //has isupper(), islower()
# include <stdlib.h> //atoi()

//Declaring caesar cypher function
void caesarCypher(char* plainText, int k);

int main(int argc, char *argv[] ){
    int k;
    if ( argc != 2 ) // argc should be 2 for correct execution 
    {
         printf("Lack of argv[1]");
         return 1;
    }
    k= atoi(argv[1]);
    //k=13;
     //Declare a string for a users name assuming the name doesn't exceed 31 characters
    char plainText[101];
    
    //Ask the user for sentence to encrypt
    //printf("Please enter the sentence you want to encrypt:\n");
    
    //Get the users input (the plain text)
    fgets(plainText, sizeof(plainText), stdin);
    
    //Prints the encrypted plain text
    caesarCypher(plainText, k);
    
    //system("pause");
    return 0;
}

void caesarCypher(char* plainText, int k){
     
 ///Caesar Cypher encryption --> C = (p + k)% N, k=secret key, p=sentence or plain text, N=the number of letters in the alphabet + 1, C=cypher
  
  int i=0;
  char cypher;
 
  
  //While the user doesn't press the enter key denoted by '\0' character, go through each character of the string
     while(plainText[i] != '\0' && strlen(plainText) > 0)
     {
            //if the character is lowercase, where letter range is [97-122]
            if(islower(plainText[i]))
            {
              cypher = (char)((int)plainText[i]-97 + k)%26 +97;
            }
            else //Else it's uppercase, where letter range is [65-90]
            {
               cypher = (char)((int)plainText[i]-65 + k)%26 +65;
            }
            //Print the cyphered character if it is alphanumeric (letter)
            if(isalpha(plainText[i]))
            {
               printf("%c", cypher);
            }
            else  //if the character is not a letter then print the character
            {
               printf("%c", plainText[i]);
            }
            i++;       
     }
    // printf("\n");//Print a new line
}
