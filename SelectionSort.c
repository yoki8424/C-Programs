/*
  This program sorts an array of elements using the selection sort algorithm
  By:randerson112358
  
  Output: 
  Enter the total number of elements: 5
  Enter 5 elements: 5 6 1 20 7
  The array after sorting is: 1 5 6 7 20

  How it works:
  5 6 1 20 7
  1 6 5 20 7  (min = 1, swapped with 5)
  1 5 6 20 7  (min = 5, swapped with 6)
  1 5 6 20 7  (min =6, no swapping needed)
  1 5 6 7 20  (min = 7, swapped with 20)
  1 5 6 7 20  (min=20, we have reached the end of the list)

  
  
*/

#include<stdio.h>

int SelectionSort(int size, int *a);

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

int SelectionSort(int size, int *a){
	
	/* a[0] to a[n-1] is the array to sort */
int i,j;
int n;

/* advance the position through the entire array */
/*   (could do j < n-1 because single element is also min element) */
for (j = 0; j < size-1; j++) 
  {
    /* find the min element in the unsorted a[j .. n-1] */

    /* assume the min is the first element */
    int iMin = j;
    /* test against elements after j to find the smallest */
    for (i = j+1; i < size; i++) {
        /* if this element is less, then it is the new minimum */
        if (a[i] < a[iMin]) {
            /* found new minimum; remember its index */
            iMin = i;
        }
    }

    if(iMin != j) 
    {
        //swap(a[j], a[iMin]);
	    int temp = a[j];
	    a[j] = a[iMin];
	    a[iMin] = temp;
    }
}
	
	return 1;
}
