#include<stdio.h>

int main(){
	
	int i;
	int n = 10;
	int sum = 0; 
	
	//Using a while loop
	while(sum <= n){
		printf("%d \n", i);
		
		sum = sum + i;
		i++;
	}
	
	printf("The sum from 0 to %d = %d, which is greater than %d \n", i-1, sum, n);
	
	i=0;
	//An infinite while loop
	while( 1 == 1){
		
		if(i == 10){
			break;
		}
		printf("%d) Golden State Warriors will lose. \n", i+1);
		i++;
	}
	
	int x = 5;
	do{
		//statement 
		printf("X = 5 \n");
		x = 6;
		
	}while(x == 5);
	
	return 0;
}
