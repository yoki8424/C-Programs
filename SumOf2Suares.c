//Description : This program takes in a number (N) and returns two numbers (a) and (b) , such that a^2 + b^2 = N, if that is not the case then print N is not a summation of two perfect squares
//Example: Input = 25
//         Output = 3 and 4
//         Note: The reason why we return 3 and 4 is because 3^2 + 4^2 = 9 + 16 = 25
//
// How this algorithm works:
// Go through all of the possible combinations of a^2 + b^2 and check if it is equal to our input (N) 

#include<stdio.h>
#include<math.h>// pow()

int main(){
	
	int i,j;//Variables to iterate through the loop also a and b
	int N=32; // The input number (N) 
	int isSQ = 0;// 0 represent FALSE
	
	
	for(i=1; i<=N; i++ )
	   for(j=1; j<=N; j++){
	   		
	   		//Check a^2 + b^2 == N
	   		if(pow(i,2) + pow(j,2) == N){
	   			printf("a = %d and b= %d \n", i, j);
	   			isSQ = 1; //1 represents TRUE
	   			return 0;
			}
	   }
	    
	if(isSQ == 0){
		printf("%d is not a summation of two perfect squares", N);
	}
	
	return 0;
}
