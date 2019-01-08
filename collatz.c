/*
  Description: This program models the collatz conjecture
  
  The collatz Conjecture is a conjecture that concerns a sequence that was introduced in 1937 and named after Lothar Collatz. The conjecture is that no matter what value of 'n' where n is a positive integer, the sequence always reaches 1.
Mathematicians like Erdos said "this is a problem for which mathematics is perhaps not ready". 
So far mathematicians have tried approximately 2^60 positive integers, and so far they always reach 1, but this is a fun problem you can 
try at home.
  
  Collatz Conjecture Rules:
  1. Start with any positive integer value 'n'
  2. If the value is an even number then the next term is halved (n/2)
  3. If the value is an odd number then the next term is that number times 3 plus 1 (3n+1)
  4. Repeat this operation for the next term, and use that term as the new input
     (new positive integer value)
     
  Ex: n=12, Sequence: 12, 6, 3, 10, 5, 16, 8, 4, 2, 1
*/

#include<stdio.h>

int collatz(int n);

int main(){
	
	int n=100;
	collatz(n);
	
	return 0;
}

int collatz(int n){
	
	int nextTerm = n;
	
	printf("%d ", n);
	
	//Base Case
	if(n == 1){
		return 1;
	}
	
	//Collatz Conjecture Rules
	// Check if 'n' is even number
	if(n%2 == 0){
		nextTerm = n/2;
	}
	else if(n%2 == 1){// Check if 'n' is an odd number
		nextTerm = 3*n + 1;
	}
	
	return collatz(nextTerm);
	
}
