/*
   Description:
   This program prints the numbers from 1 to 100. But for multiples of 3
   print "Fizz" instead of the number, for multiples of 5 print "Buzz" instead of the number, and
   for multiples of both 3 and 5 print "FizzBuzz".
*/

#include<stdio.h>

int main(){
	
	int i; // iterator
	
	for(i=1; i<= 100; i++){
		
		//Check if the number is divisible by both 3 and 5
		if(i%3 ==0 && i%5 == 0){
			printf("FizzBuzz ");
		}
		else if(i%3 == 0){ //Check if i is divisible by 3
			printf("Fizz ");
		}
		else if(i%5 == 0){ //Check if i is divisible by 5 
		    printf("Buzz ");
		}
		else{
			printf("%d ", i);
		}
		
		printf("\n");
	}
	
	return 0;
}
