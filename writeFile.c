/*
  Description: This program create and write to a .txt file
*/


/* 
The C programming language provides many standard library functions for file input and output. 
These functions make up the bulk of the C standard library header <stdio.h>
You can use the fopen( ) function to create a new file or to open an existing file.

  Mode	Description
r	Opens an existing text file for reading purpose.

w	Opens a text file for writing. If it does not exist, 
then a new file is created. Here your program will start writing content from the beginning of the file.

a	Opens a text file for writing in appending mode. If it does not exist, 
then a new file is created. Here your program will start appending content in the existing file content.

r+	Opens a text file for both reading and writing.

w+	Opens a text file for both reading and writing. It first truncates the file to zero length 
if it exists, otherwise creates a file if it does not exist.

a+	Opens a text file for both reading and writing. It creates the file 
if it does not exist. The reading will start from the beginning but writing can only be appended. */

#include<stdio.h> //fopen, fclose(), fprintf()

int main(){
	
	
	FILE *f = fopen("file.txt", "w+");
	//printf("X%sX\n", f);
if (f == NULL)
{
    printf("Error opening file!\n");
    //exit(1);
    return 1;
}

/* print some text */
const char *text = "Write this to the file";
fprintf(f, "Some text: %s\n", text);

/* print integers and floats */
int i = 1;
float pi = 3.1415927;
fprintf(f, "Integer: %d, float: %f\n", i, pi);

/* printing single chatacters */
char c = 'A';
fprintf(f, "A character: %c\n", c);

//To close a file, use the fclose( ) function
fclose(f);
}
