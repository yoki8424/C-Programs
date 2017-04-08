/*
  Descrtiption: This program converts a number in base 10 to base 2 a.k.a binary
  
  How it works:
  
  Suppose we have a number in base 10 and that number is 50, we would like to convert 50 to it's binary equivalent.
  
  To convert 50 to binary steps:
  50 % 2 = 0
  25 % 2 = 1
  12 % 2 = 0
   6 % 2 = 0
   3 % 2 = 1
   1 % 2 = 1
   
Therefore 50 in binary is 110010

NOTE: our original number (50) keeps getting divided by 2 each iteration.

10^0 * (50 % 2) +
10^1 * (25 % 2) +
10^2 * (12 % 2) +
10^3 * ( 6 % 2) +
10^4 * ( 3 % 2) +
10^5 * ( 1 % 2)


*/

# include <stdio.h>
# include <math.h> //pow() example 10^2 ==> pow(10,2) = 100

//Declare Decimal to Binary, takes in a decimal number and returns it's binary equivalent as an integer
int DecToBin(int n);

int main(){
	
	int num;
	int bin;
	
	//Asking the user for na number to convert to binary
	printf("Please enter an integer and I will convert it to binary: ");
	scanf("%d", &num);
	
	//Convert the number to binary
	bin = DecToBin(num);
	
	//Print the binary number
	printf("The number %d in binary is %d \n", num, bin);
	
	return 0;
}


/*
10^0 * (50 % 2) +
10^1 * (25 % 2) +
10^2 * (12 % 2) +
10^3 * ( 6 % 2) +
10^4 * ( 3 % 2) +
10^5 * ( 1 % 2)
*/
int DecToBin(int n){
	
	int i=0;
	int num = 0; 
	
	while( n >= 1 ){
		
		num = pow(10,i) * (n % 2) + num;
		
		n = n/2;
		i++;
	}
	
	return num;
	
}
