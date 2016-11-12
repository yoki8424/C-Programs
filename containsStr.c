/*
  This program tells if a string is contained in another string.
  Example: Does 'harbor' contain 'or' , since it is the code will print 'Yes or is contained in harbor starting at position 4 of harbor', else it prints .. it is not contained in ..
  By: randerson112358
*/

# include <stdio.h>
# include <string.h>
# define LEN 31

/*
  This function returns the starting index (a value greater than or equal to 0) of the substring within the string, and returns -1 if the Str2 isn't contained in Str1
*/
int contains(char* str1, char* str2);

int main(void)
{
    
    char *string1="harbor";
    char *string2="ore";
    int index = contains(string1, string2) ;
    
    // If index is greater than 0 then we know the starting index of the substring and that string2 is contained in string1
    if( index >= 0)
      printf("Yes %s is contained in %s starting at position %d of %s \n", string2, string1, index, string1 );
    else
      printf("%s is not contained in %s \n", string2,string1);
    
    
    //Only use this if you are using a  Windows operating system, otherwise comment it out
    system("pause");
}


/*
  This function returns the starting index (a value greater than or equal to 0) of the substring within the string, and returns -1 if the Str2 isn't contained in Str1
*/
int contains(char* str1, char* str2){
	
    int i,j;
    int strlen1=strlen(str1), strlen2=strlen(str2);   
    int startingIndex = 0;  
    
    if(strlen1 < strlen2)
       return -1;
    else
    {
        for(i=0; i<strlen1; i++)
         for(j=0; j< strlen2; j++)
         {
                  
                  if(str1[i+j] == str2[j] )
                  {               startingIndex = i;  
                                
                                 if(j== strlen2 -1)
                                   return startingIndex;
                  }
                  else
                  break;
         }
        return -1;
    }
    
    
}
