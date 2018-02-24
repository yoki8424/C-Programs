//This program compares a Float and a Double
//Example: Does float x = 3.0 equal double y= 3.0
// Answer: Yes or No

//Example 2: Does float x =3.1 equal double y=3.1
// Answer: Yes or No

//float x = 3.1 = 11.0001100110011....
//double y = 3.1 = 11.0001100110011....
//Compare the two, x == y ==> 11.0001 == 11.00011001

#include<stdio.h>

int main(){
	
	float x = 3.1;
	double y = 3.1;
	
	if(x == y ){
		printf("Yes x equals y \n");
	}
	else{
		printf("No x does NOT equal y \n");
	}
	
	return 0;
}
