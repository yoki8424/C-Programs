/*
   This program sorts an array of elements using the insertion sort algorithm
   
   Output:
   Enter total elements: 3
   Enter 3 elements: 9 4 8
   After Sorting: 4 8 9
*/

#include <stdio.h>

int insertionSort(int size, int *array);

int main(){
	
	int size, i , array[21];
	
	printf("Enter total number of elements: ");
	scanf("%d", &size);
	
	printf("Enter %d elements: ", size);
	for(i=0; i<size; i++)
	   scanf("%d", &array[i]);
	   
	//Start sorting the array using the insertion sort algorithm
	insertionSort(size, array);
	
	printf("After Sorting: ");
	for(i=0; i<size; i++)
	   printf(" %d", array[i]);
	
	printf("\n");
	system("pause"); //Comment this our if you are not using a Windows OS
	return 0;
}

int insertionSort(int size, int *array){
	
	int i, j;
	int temp;
	
	//Insertion Sort
	for(i=1; i<size; i++){
		
		temp=array[i];
		j= i-1;
		
		while( (temp < array[j]) && (j >= 0)){
			
			//swap
			array[j+1] = array[j];
			j= j-1;
		}
		
		array[j+1] = temp;
	}
	
	return 1;
}
