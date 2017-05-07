/*
   This program finds the GCD or Greatest Commen Denominator of two integers (the largest integer that can exactly divide both numbers without a remainder.
*/

#include <stdio.h>

int main(){
	
	int n1, n2;
	int gcd;
	
	//Print enter two integers / ask the user for two integers
	printf("Enter two integers: ");
	
	//Scan in the two integers to variable n1 and n2
	scanf("%d %d", &n1, &n2);
	
	//Loop through all possible values from i=1 to n1 or n2
	int i;
	for(i=1; i<=n1 && i<=n2; i++){
		
		//Check if i is a factor of both integers
		if(n1 % i == 0 && n2 % i == 0){
			gcd = i;
		}
		
	}
	
	printf("G.C.D of %d and %d is %d", n1, n2, gcd);
	
	
	return 0;
}
