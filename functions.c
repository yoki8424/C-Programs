#include <stdio.h>

//Defining the function
int foo(int bar);
int power2(int value);
int getSum(int value);
int power4(int x);
int addXY(int x, int y);

int recursiveSum(int x);

int main(){
	
	int x = foo( 3 );
	int y = power2(x);
	int z = power4(x);
	int a = recursiveSum(x);
	int b = addXY(x,  y);
	
	printf("x = %d \n", x);
	printf("x squared = %d \n", y );
	printf("sum from 0 to %d = %d \n", x, getSum(x));
	printf("x^4 = %d \n", z );
	printf("sum from 0 to %d = %d \n", x, a);
	printf("%d + %d = %d \n", x, y, b);
	
	return 0;
}
/*
    x = 2
    recursiveSum(2) = recursiveSum(x-1) + x; = recursiveSum(1) + 2; x=2   ====> 1 + 2 = 3
    recursiveSum(1) = recursiveSum(x-1) + x; = recursiveSum(0) + 1; x = 1 ====> 0 + 1 = 1
    recursiveSum(0) = 0; = 0; x = 0
    
    
*/


int recursiveSum(int x){
	
	//Base Case
	if(x <= 0){
		return 0;
	}
	  
	  
	//Recursive
	return recursiveSum(x-1) + x;
	
	
}

//Add the two arguments X and Y
int addXY(int x, int y){
	
	return x + y;
}

//Create the function
int foo(int bar){
	
	return bar;
}

//Creating another function this function returns value^2
int power2(int value){
	
	return value * value;
}

//Creating another function, this function returns the sum from 0 to value
int getSum(int value){
	
	int i;
	int sum = 0;
	for(i=0; i<= value; i++){
		sum = sum + i;
	}
	
	return sum;
}

//Creating another function this function returns x^4
int power4(int x){
	
	return power2(x) * power2(x);
}
