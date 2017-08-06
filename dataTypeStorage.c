/*
   This program returns the storage size of data types
   
   Example:
   
   Data_Types		Storage_Size
   char				1 byte
   int				2 or 4 bytes
   double			8 bytes
   float			4 bytes
   unsigned char	1 byte
   long				4 bytes
   unsigned long	4 bytes
   long double		10 bytes
*/

//Library
#include<stdio.h>

//Main Function
int main(){
	
	printf("Data_Types\t\tStorage_Size \n");
	printf("char\t\t\t%d byte(s) \n", sizeof(char));
	printf("int\t\t\t%d byte(s) \n", sizeof(int));
	printf("double\t\t\t%d byte(s) \n", sizeof(double));
	printf("float\t\t\t%d byte(s) \n", sizeof(float));
	printf("unsigned char\t\t%d byte(s) \n", sizeof(unsigned char));
	printf("long\t\t\t%d byte(s) \n", sizeof(long));
	printf("unsigned long\t\t%d byte(s) \n", sizeof(unsigned long));
	printf("long double\t\t%d byte(s) \n", sizeof(long double));
	
	return 0;
}
