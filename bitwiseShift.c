//Description: This is a program that does basic left and right shift opertations

#include<stdio.h>

int main(void){
	
	//Left Shift Operation '<<'
	printf("%d \n", 10 << 2); // 10 => 1010 after left shift by 2, we get 101000= 40 in decimal, 10 * 2^2 = 40
	printf("%d \n", 11 << 3); // 11 => 1011 after left shift by 3, we get 1011000 = 88 in decimal, 11 * 2^3 = 88
	
	//Right Shift Operation '>>'
	printf("%d \n", 6 >> 1); //6 => 0110 after right shift by 1, we get 0011 = 3 in decimal, 6 / 2^1 = 3 
	printf("%d \n", 10 >> 1);//10 => 1010 after right shift by 1, we get 0101 = 5 in decimal, 10/ 2^1 = 5
}
