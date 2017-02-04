#include<stdio.h>

int main(){
	
	//Declaring and initializing a 2D Array
	int twoDArray[3][4]={
	   {0,1,2,3},
	   {4,5,6,7},
	   {8,9,10,11}
	};
	
	
	
	//Declaring and initializing a 2D array
	int a[2][3];
	a[0][0] = 1;
	a[0][1] = 2;
	a[0][2] = 3;
	a[1][0] = 4;
	a[1][1] = 5;
	a[1][2] = 6;
	
	//Declaring and initializing a 2D array
	int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	
	
	printf("The third value is %d \n", arr[0][2]);
	return 0;
}
