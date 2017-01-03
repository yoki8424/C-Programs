/**
    Description: This program uses a greedy algorithm to give the least amount of change back.
*/


#include <stdio.h>

//Define the function
void greedyAlgorithm(int c);

int main(void){
	
	int changeOwed;
	
	printf("How much change is owed (in cents) ? ");// Ask user input
	scanf("%d", &changeOwed); //Get user input
	greedyAlgorithm(changeOwed);// Run the greedy algorithm
	
	
	
	system("pause");//Comment out if you are not using Windows OS
}

void greedyAlgorithm(int c){
	
	int numQ=0, numD=0, numN=0, numP =0, count =0;
	
	//Gets all of the possible number of quarters ($0.25) as change
	while(c >= 25){
		numQ++;
		c = c - 25;
	}
	//Gets all of the possible number of dimes ($0.10) as change
	while(c >= 10){
		numD++;
		c = c - 10;
	}
	//Gets all of the possible number of nickels ($0.05) as change
	while(c >= 5){
		numN++;
		c = c - 5;
	}
	//Gets all of the possible number of pennies ($0.01) as change
	while(c >= 1){
		numP++;
		c = c - 1;
	}
	
	printf("Please give the user the following: \n");
	printf("%d Quarters \n", numQ);
	printf("%d Dimes \n", numD);
	printf("%d Nickels\n", numN);
	printf("%d Pennies \n", numP);
	
}
