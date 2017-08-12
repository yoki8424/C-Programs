/*

  This program sorts an array of elements using the bubble sort algorithm

  By: randerson112358

  

  Output:

  Enter total number(s) of elements: 4

  Enter the 4 elements: 1 5 4 3

  After Sorting: 1 3 4 5

 NOTE: This bubble sort algorithm runs Best & Worst Case = O(n^2)
  

*/



#include <stdio.h>



int BubbleSort(int size, int *array);



int main(void){

	

	int size, i, array[20];

	

	printf("Enter total number(s) of elements: ");

	scanf("%d", &size);

	

	printf("Enter the %d elements: ", size);

	for(i=0; i<size; i++){

		scanf("%d", &array[i]);

	}

	

	//Run the Bubble Sort Algorithm to sort the list of elements

	BubbleSort(size, array);

	

	printf("After Sorting: ");

	for(i=0; i<size; i++){

		printf(" %d", array[i]);

	}

	

	printf("\n");

	system("pause"); // uncomment if you are not using Windows OS

	return 0; 

}



int BubbleSort(int size, int *array){

	

	int i, j, temp;

	

	//Bubble sorting algorthm

	for(i=1; i<size; i++){

		for(j=1; j< size; j++){

			

			//Swap

			if(array[j-1] > array[j]){

				temp = array[j-1];

				array[j-1] = array[j];

				array[j]= temp;

			}

		}

	}

	

	return 1;

}
