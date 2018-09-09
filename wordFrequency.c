/* 
 * C Program to Find the Frequency of  Every Word in a 
 * given String
 * Resource: https://www.sanfoundry.com/c-program-find-word-frequency-string/
 */
#include <stdio.h>
#include <string.h>
#include<ctype.h>
 
void main()
{
    int count = 0, c = 0, i, j = 0, k,m, space = 0;
    char str[100], p[50][100], str1[20], ptr1[50][100];
    char *ptr;
 
    printf("Enter the string\n");
    scanf(" %[^\n]s", str);
    
    printf("string length is %d\n", strlen(str));
    
    for(m = 0; m < strlen(str); m++){	
    	if(isalpha(str[m] ) ){
    		str[m] = tolower(str[m]);
    		printf("str[%d] = %c \n", m, str[m]);
		}
  	}
		
    for (i = 0;i<strlen(str);i++)
    {
        if ((str[i] == ' ')||(str[i] == ', ')||(str[i] == '.'))
        {
            space++;
        }
    }
    for (i = 0, j = 0, k = 0;j < strlen(str);j++)
    {
        if ((str[j] == ' ')||(str[j] == 44)||(str[j] == 46))  
        {    
            p[i][k] = '\0';
            i++;
            k = 0;
        }        
        else
             p[i][k++] = str[j];
    }
    k = 0;
    for (i = 0;i <= space;i++)
    {
        for (j = 0;j <= space;j++)
        {
            if (i == j)
            {
                strcpy(ptr1[k], p[i]);
                k++;
                count++;
                break;
            }
            else
            {
                if (strcmp(ptr1[j], p[i]) != 0)
                    continue;
                else
                    break;
            }
        }
    }
    for (i = 0;i < count;i++) 
    {
        for (j = 0;j <= space;j++)
        {
            if (strcmp(ptr1[i], p[j]) == 0)
                c++;
        }
        printf("%s -> %d times\n", ptr1[i], c);
        c = 0;
    }
}
