//Find The Missing Number
/*
    You are given a list of n-1 integers and these integers are in the range of 1 to n.
    There are no duplicates in the list. 
    One of the integers is missing in the list. 
    Write an efficient code to find the missing integer.
	By efficient we mean in O(n) time. 
	
	Example:
	Input: [1,2,4,6,3,7,8]  // Array of Size 7 = 8-1 , so n = 8
	Output: 5
*/

#include<stdio.h>

//getMissingNo, it takes an array and the size of the array as arguments and returns the missing integer
int getMissingNo(int a[], int n);

int main(){
	
	int a[] = {1,2,4,6,3,7,8};
	int size = 7;
	int miss = getMissingNo(a,size);
	
	printf("%d \n", miss);
	
	return 0;
}

/*
    How the Algorithm Works:
    1. Get the sum of the numbers in the array ex: [1,2,4,6,3,7,8] = 1+2+4+6+3+7+8=31
    sum = 31
    2. Get the sum of all of the possible numbers in the array ex: 1+2+3+4+5+6+7+8=36
    total = n*(n+1) / 2 = 36
    3. Subtract all the possible numbers with the sum of the numbers in the array.
      ex: 36 - 31 = 5, total - sum = miss = missing value
*/

int getMissingNo(int a[], int n){
	
	int i, total, sum=0;
	total = (n+1) * (n+2)/2;
	
	for(i=0; i<n; i++){
		sum += a[i];
	}
	
	return total - sum;
}


