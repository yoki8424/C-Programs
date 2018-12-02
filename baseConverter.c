/*
  Description: This program takes a value in base 10
               and converts it to any other base.
*/

#include<stdio.h>
#include<math.h> // pow()

int DecToBase(int base, int n);

int main(){
	
	int i=0;
    int base= 8;
	
	
	for(i=0; i<=25; i++)
		printf("The decimal number %d in base %d is %d  \n", i,base, DecToBase( base, i) );
		
	system("pause");
	return 0;
}

/*
     n = number in base 10 = 4
     base = the base that we want to convert to = 2
     4 /2  =  2  Remainder= 0
     2 / 2 = 1   Remainder= 0
     1 / 2 = 0   Remainder= 1
     
     4 in binary is 1 * 100 + 0 *10 + 0 *1 = 100
     
     4 in binary is 100
*/

int DecToBase(int base, int n){
	
	int num =0;// the number that we want to return in the new base
	int i = 0; // the iterative variable used for the place 
	int quotient= n; // the quotient of the number in base 10 
	int remainder = 0; // the remainder of the number in base 10 
	
	while(quotient != 0){
		
		remainder = quotient%base;
		quotient = quotient / base;
		
		num = pow(10,i)*remainder + num;
		i++;
	}
	
	return num;
}
