/*
   Given an array of integers, return indices of 
   the two number such that they add up to a specific target
   
   Example"
   Given nums= [2,7,11,15], target = 9,
   Because nums[0] = 2 and nums[1] = 7
   nums[0] + nums[1] = 2 + 7 = 9 = target
   return [0,1]
*/

#include<stdio.h>

int* twoSum(int *arr, int size, int target);

int main(){
	
	int array[4] = {2,7,11,15};
	int *index = twoSum(array, 4, 9);
	
	printf("%d, %d \n", index[0], index[1]);
	
	return 0;
}

int* twoSum(int *arr, int size, int target){
	int indices[2];
	int num1 = -1;
	int num2 = -1;
	int i,j;
	
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			//Checking the index isn't the same, therefore it's not the same number that we are adding
			if(i != j){
				
				//Check for the two numbers that add up to the target
				if(arr[i] + arr[j] == target){
					num1 = i;
					num2 = j;
				}
			}
		}
	}
	
	indices[0]= num1;
	indices[1]=num2;
	
	return indices;
}
