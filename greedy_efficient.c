/*
  Description: This program gives the least amount of USD coins for a given amount efficiently.
  NOTE: USD coin set is { 25, 10, 5, 1}
  By randerson112358
*/

#include<stdio.h>

#define LEN  4 // The CONSTANT length of our array/coin set

//Greedy Algorithm for printing the least amount of change
void greedy(int amount);

int main(void){
	
	int amount = 99;

	greedy(amount);
	
	
	system("pause");//Comment this out if you are not using Windows
}

void greedy(int amount){
	
	int i=0;//index of the array
	int number;//the number of least amount of coin for a specific coin value
	int coin_set[LEN]= {25, 10, 5, 1};//The USD coin set
	
	printf("The least amount of change needed for the amount %d is below: \n", amount);
	
	while(i < LEN){
		
		if(coin_set[i] <= amount){
			number = amount/coin_set[i];
			
			//Prints the least number of coins needed
			if(coin_set[i] == 25 ){
				printf("%d quarters (%d)  \n", number, coin_set[i]);
			}
			if(coin_set[i] == 10 ){
				printf("%d dimes (%d)  \n", number, coin_set[i]);
			}
			if(coin_set[i] == 5 ){
				printf("%d nickels (%d)  \n", number, coin_set[i]);
			}
			if(coin_set[i] == 1 ){
				printf("%d pennies (%d)  \n", number, coin_set[i]);
			}
			
			amount = amount - number *coin_set[i];
		}
		
		i++;//increment i by 1
	}
}
