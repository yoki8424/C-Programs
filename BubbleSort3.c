/*
This program sorts an array of elements using the bubble sort algorithm
By: randerson112358
This procedure of bubble sort Best Case is O(n) and Worst Case is O(n^2)

procedure bubbleSort( A : list of sortable items )
    n = length(A)
    repeat
        swapped = false
        for i = 1 to n-1 inclusive do
            if A[i-1] > A[i] then
                swap(A[i-1], A[i])
                swapped = true
            end if
        end for
        n = n - 1
    until not swapped
end procedure

*/

#include <stdio.h>

int BubbleSort(int size, int *array);

int main(void){

	int size, i, array[20];

	printf("Enter total number(s) of elements: ");
	scanf("%d", &size);

	printf("Enter the %d elements: ", size);

	for(i=0; i<size; i++)
    {
		scanf("%d", &array[i]);
	}

	//Run the Bubble Sort Algorithm to sort the list of elements
	BubbleSort(size, array);
  
	printf("After Sorting: ");
	for(i=0; i<size; i++)
    {
		printf(" %d", array[i]);
	}

	printf("\n");

	system("pause"); // uncomment if you are not using Windows OS

	return 0; 
}



/*
This procedure of bubble sort Best Case is O(n) and Worst Case is O(n^2)
procedure bubbleSort( A : list of sortable items )
    n = length(A)
    repeat
        swapped = false
        for i = 1 to n-1 inclusive do
            if A[i-1] > A[i] then
                swap(A[i-1], A[i])
                swapped = true
            end if
        end for
        n = n - 1
    until not swapped
end procedure

*/
int BubbleSort(int size, int *array){
  int swapped = 0; //0=false and 1= true
  int i, temp;
  int n = size;

  do{
  		  //Set swapped to false
		  swapped = 0; 
		  
		  for(i=1; i<= n-1; i++)
		  {
		    
			 //If the previous element is greater than the next element swap them
		     if(array[i-1] > array[i])
			 {
			     //Swap
			      temp = array[i-1];
			      array[i-1] = array[i];
			      array[i]= temp;
		      
			      //Set swapped to true
			      swapped = 1;
		     }
		  }
  
  }while(swapped== 1);

	return 0;
}
