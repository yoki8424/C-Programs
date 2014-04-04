/* 
This program adds numbers from 0 to n 
By: Rodney Anderson
4/4/2014

*/

#include<stdio.h>

int main(void){
	
	int n,i, sum=0;
	
	printf("Please insert a number \n");
	scanf("%d", &n);
	
	for(i=0; i<=n; i++)
	  sum+=i;
	  
	printf("The sum of all the numbers from 0 to %d is %d\n", n,sum);
	
	
	system("pause");
}
