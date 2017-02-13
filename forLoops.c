#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	
	//Create our for loop
	for(i=0; i < 10; i++){
		
		sum = sum + array[i];
		
		//If i reaches the last number before exiting the loop print '=' instead of '+'
		if(i == 9){
			printf("%d = ", array[i]);
		}
		else{
			printf("%d + ", array[i]);
		}
	}
	
	//Print the sum of the array
	printf("%d \n", sum);
	
	char *name = "Izzy";
	int length = strlen(name);
	
	//Print every character in the array
	for(i=0; i<length; i= i +1){
		printf("%c \n", name[i]);
	}
	
	//Infinite for loop, this loop below will never end
	/*for( ; ; ){
		//Code here
		printf("hello \n");
	}*/
	
	return 0;
}

