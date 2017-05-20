/*
   Description: This is a recursive logarithmic program
*/

#include<stdio.h>

//Declare the recursive log function
int log(int base, int val);

int main(){
	
	return 0;
}
/*
     log2(8) = 3 ==> 8/2 = 4
                     4 /2 = 2
                     2/2  = 1 is our base case
                     
     2^3 = 8 ==> 2 * 2 * 2 ==> 8
     
     
*/


int log(int base, int val){
	
	//base case
	if( val == 1)
	  return 0;
	  
	//Recursive Case
	return 1 + log(base, val/base);
	
}
