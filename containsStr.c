/*
  This program tells if a string is contained in another string.
  Example: Does 'harbor' contain 'or' , since it is the code will print 'The word was contained in ....'
*/

# include <stdio.h>
# include <string.h>
# define LEN 31

int main(void)
{//arr5 = (int**)malloc(5*sizeof(int));//allocating space for a 2d array
    int i,j;
    char *string1="abcdefg";//= (char*)malloc(5*sizeof(char));;
    char *string2="a";//=(char*)malloc(5*sizeof(char));;
    int strlen1=strlen(string1), strlen2=strlen(string2);   
    int startingIndex;  
    
    /*printf("Insert string 1 to see if it contains string 2\n");
    printf("String 1 = ");
    scanf("%s", string1);
    printf("String 2 = ");
    scanf("%s", string2);*/
    
    if(strlen1 < strlen2)
    printf("%s is not contained in %s\n", string2,string1);
    else
    {
        for(i=0; i<strlen1; i++)
         for(j=0; j< strlen2; j++)
         {
                  
                  if(string1[i+j] == string2[j] )
                  {               startingIndex = i;  
                                
                                 if(j== strlen2 -1)
                                 printf("The word was contained in the first word at index %d\n", startingIndex);
                  }
                  else
                  break;
         }
        
    }
    system("pause");
}
