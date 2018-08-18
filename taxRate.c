//Description: This program is an example of an if statement for sales tax.

#include<stdio.h>

#define TAXRATE .0775 // The tax rate of Anaheim CA

int main(){
	
	double cost; // This is the price of the item
	int isTaxed; //if true = 1, else if false != 1 or = 0
	
	// Get the cost or price of the item
	printf("What is the price of the item that you are buying ? \n");
	scanf("%lf", &cost);
	
	//Ask if the item is taxed or not
	printf("Is the item taxed ? (1=Yes, 0=No) \n");
	scanf("%d", &isTaxed);
	
	if(isTaxed == 1){
		cost = cost * (1 + TAXRATE); // = cost + cost*TAXRATE
	}
	
	//Print the total
	printf("Your final total is $%.2lf \n", cost);
	
	return 0;
}
