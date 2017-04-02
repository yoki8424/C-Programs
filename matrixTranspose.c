

/*
   Description: This program prints the transpose of a matrix

   ---------------------------------------------------------------------------------------------------------------------------------
   How it works:
   ---------------------------------------------------------------------------------------------------------------------------------
   Suppose you have a 3 x 2 matrix, that means 3 rows and 2 columns
   
   1 2
   3 4
   5 6

   NOTE: A matrix can be represented by an array in programming, so the above matrix is really just an array I'll call it 'arr' for array
   of size row = 3 by column = 2 or better written as arr[row][column] or arr[2][1];

   NOTE: The element at position 2,1 is equivalent to arr[2][1] = 6

   We want to print the transpose which means the element at position row, column becomes the element at position column, row,
   so basically element at arr[row][column] new position is arr[column][row] 
   or more specifically element arr[2][1] = element arr[1][2]  ===>  element 6 is now at position [1][2]

   So the transpose of the above matrix is below:
   A 2 x 3 matrix

   1 3 5
   2 4 6
   -----------------------------------------------------------------------------------------------------------------------------------
   
   Example of input: 
   ----------------------------------------------------------------------------------------------------------------------------------
   Enter rows and columns of matrix: 3 2

   Enter elements of matrix:
   Enter elements a[0][0]: 1
   Enter elements a[0][1]: 2
   Enter elements a[1][0]: 3
   Enter elements a[1][1]: 4
   Enter elements a[2][0]: 5
   Enter elements a[2][1]: 6

   Entered Matrix
   1 2
   3 4
   5 6

   Example of output: Transpose of Matrix:
   1 3 5
   2 4 6
*/

#include <stdio.h>
# define ROW 20
# define COL 20

int main()
{

    int  r, c, i, j;//r = row, c= column, i and j are index
    
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    int a[ROW][COL], transpose[COL][ROW];

    // Storing elements of the matrix
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a[%d][%d]: ",i, j);
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix a[][] */
    printf("\nEntered Matrix: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }

    // Finding the transpose of matrix a
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix a
    printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n\n");
        }

    return 0;
}
