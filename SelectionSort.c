/*
  This program sorts an array of elements using the selection sort algorithm
  By:randerson112358
  
  Output: 
  Enter the total number of elements: 5
  Enter 5 elements: 5 6 1 20 7
  The array after sorting is: 1 5 6 7 20
  
  
*/

#include<stdio.h>

int SelectionSort(int size, int *array);

int main(){
	
	int size, i, array[21];
	
	printf("Enter the total number of elements: ");
	scanf("%d", &size);
	
	printf("Enter %d elements: ", size);
	for(i=0; i<size; i++)
      scanf("%d", &array[i]);
      
    //Sort the array using the selection sort algorithm
	SelectionSort(size, array);
	
	printf("The array after sorting is: ");
	for(i=0; i<size; i++)
	   printf(" %d", array[i]);
	 	
	return 0;
}

int SelectionSort(int size, int *array){
	
	int i, j, temp;
	
	//Selection Sort
	for(i=0;i< size; i++)
	   for(j=0; j<size; j++){
	   	  
	   	  //Swap elements
	   	  if(array[i] < array[j]){
	   	  	temp = array[i];
	   	  	array[i]= array[j];
	   	  	array[j] = temp;
			 }
	   }
	
	return 1;
}
