
/*TITLE:
Find the smallest positive integer value that cannot be represented as sum of any subset of a given array

*/

//Given a sorted array (non-decreasing order) 
//of positive numbers, find the smallest positive integer value 
//that cannot be represented as sum of elements of any subset of a given set
//Expected to solve this in O(n)

//Example 1: Input: arr[] = {1,3,6,10,11,15};
//           Output: 2
//           Explaination: 1, 3, 4, 9,20, 36, 12, 11, 15, 25, 31, ....

//Example 2: Input: arr[] = {1,1,1,1,1}
//           Output: 6
//           Explaination: {1,2,3,4,5 }

//Example 3: Input: arr[] = {1,1,3,4}
//           Ouput: 10
//           Explanation: {1, 2, 3, 4, 5, 6, 7, 8, 9  } 

//Example 4: Input arr[] = {2}
//           Output : 1
//           Explanation the smallest positive integer value is 1

#include<stdio.h>

//Function
int smallInt(int arr[], int size);

int main(){
	int arr[]= {1,3,6,10,11,15};
	int size = 6;
	
	printf("%d ", smallInt(arr, size));
	return 0;
}

int smallInt(int arr[], int size){
	
	int i;
	int sum = arr[0];
	int next_num;
	
	if(arr[0] > 1)
	  return 1;
	
	for(i=0; i<size-1; i++){
		
		next_num = arr[i+1];
		

		if(next_num - sum > 1){
			return sum+ 1;
		}
		else{
			sum += next_num;
		}
		
	}
	
	return sum+1;
}
