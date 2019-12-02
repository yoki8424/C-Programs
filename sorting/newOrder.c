/*
Given an alphabet this program sorts names/words.

Input:
 Line 1) The new alphabet
 Line 2) The 'n' number of names / words to sort
 Line 3) The 'n' names to sort
 
 Output: 
  The sorted names / words

Example: 
  Input: 
  b j k v q z c d e t u h w x n o p f g l y m r s i a
  5 
  jonah
  peter
  frank
  john
  adam
  
  Output:
  john
  jonah
  peter
  frank
  adam


*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
#define SIZE 20
#define MAX 52

int compare(char [],char [],char []);

int main(){
char order[MAX+1];
int n, i, j;
char name[SIZE][100];//2d array. size of the array and size of each name
char tmp[100];

for(i = 0; i < MAX; i++)
    scanf("%[^\n]c", &order[i]);//it scans the spaces between the characters  and the characters for the order of the names

scanf("%d", &n);//gets the number of names

for(i = 0; i < n; i++){
	scanf("%s", name[i]);//gets the names
}
//bubble sorting
for(i = 0; i < n; i++){
       for(j = i+1; j < n; j++){
           if(compare(name[i],name[j],order)){
               strcpy(tmp, name[i]);
               strcpy(name[i], name[j]);
               strcpy(name[j],tmp);
        }
    }
}

    for(i = 0; i < n; i++){
       printf("\n\n%s\n",name[i]);
    }

return 0;
}

//function will decide if we should swap or not
int compare(char name1[],char name2[],char order[]){
   int len, i , j;

if(strlen(name1)> strlen(name2)) //if length of name1 greater than length of name2
            len = strlen(name2);
        else
            len = strlen(name1);

   for(i = 0; i < len; i++){ //loop until length of small string s2

   //checking both string at index i of name1 and name2
       if(name1[i] != name2[i]){ //if both are different

           for (j = 0; j < MAX; j++){ //loop to check which character is first
               if(order[j] == name1[i]){ //if character in name1[i] is first no swapping required because they are already in order
                    //printf("Don't swap:  %s , with %s\n Alphabet=%c\n", name1, name2, order[j]);
                    //printf("name1 char = %c, and name2 char = %c \n\n", name1[i], name2[i]);
                    return FALSE;
               }
               if(order[j] == name2[i]){ //if the character in name2[i] is first then swap
                    //printf("Swap: %s , with %s Alphabet=%c\n", name1, name2, order[j]);
                   // printf("name1 char = %c, and name2 char = %c \n\n", name1[i], name2[i]);
                    return TRUE;
               }
           }
       }

       printf("\n");
   }

   if(strlen(name1)> strlen(name2)){
    //if name1 length is greater. This is needed in case words are similar but one letter changes
   // printf("Went to the bottom of function\n");
       return TRUE; //swapping needed
   }
   else{
    //printf("Went to the bottom of function\n");
    //if name2 smaller
       return FALSE; //no swapping needed
   }
}

