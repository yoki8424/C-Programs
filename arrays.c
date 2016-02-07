# include<stdio.h>

//passing arrays in functions
int function1(int *arr, int **arr2);
int function2(int arr[], int arr2[][3]);

int main(void)
{
    int arr[3] = {0,1,2};
    int arr4[3][3];
    int **arr5;
    int arr3[3][3] = {
                    {0,1,2},
                    {3,4,5},
                    {6,7,8}
                    };
    
    int **arr2D, *arr1D;
    int i,j;
    
    char arr6[3] ={'a','b','c'};
    char arr7[3][3] = {
                       {'a', 'b', 'c'},
                       {'d', 'e', 'f'},
                       {'g', 'h', 'i'},
                       };
    char arr8[2][2];
    arr8[0][0] = 'a';
    
    char *arr9=(char*)malloc(5*sizeof(char));//allocating space for a 2d array
    
    
    
    arr1D = (int*)malloc(5*sizeof(int));// so now we have an array of size 5 which is 0-5 so it can hold 6 integers
    
    arr1D[0] = 0;
    arr1D[1] = 1;
    arr1D[2] = 2;
    arr1D[3] = 3;
    arr1D[4] = 4;
    arr1D[5] = 5;
    
    arr5 = (int**)malloc(5*sizeof(int));//allocating space for a 2d array
    
    
    arr5[0][0] = 0;
    printf("printing the digits in allocated arr1D:\n");
    for(i=0; i<6; i++){
    printf("arr1D[%d] = %d\n", i, arr1D[i]);}
    
    printf("size of array1D = %d\n",sizeof(arr1D)/sizeof(int));
    printf("\n");
    
    function1(arr1D, arr2D);
    function2(arr, arr3);
    printf("\n");
    
    
    //////////////////////////////////////////////// ---------------->>>> GIVES AN ERROR, function1(arr,arr4);
    //printing everything in arr
    for(i=0; i<3; i++){printf("arr[%d] = %d\n",i,arr[i]);}
    printf("size of array = %d\n",sizeof(arr)/sizeof(int));
    printf("\n");
    
    for(i=0; i<3; i++)
     for(j=0; j<3; j++)
     {
              printf("arr3[%d][%d] = %d\n", i,j, arr3[i][j]);
     }
     printf("size of array = %d\n",sizeof(arr3)/sizeof(int)); //should be 3 X 3 = 9
    
    int arr10[11];
    for(i=0; i<11;i++)
    arr10[i] = i;
    
    arr[11] = 11;
    printf("%d", arr10[11]);
    system("pause");
}
int function1(int *arr, int **arr2)
{
    printf("size of single array = %d\n",sizeof(arr)/sizeof(int));
    printf("size of double array = %d\n",sizeof(arr2)/sizeof(int));
}

int function2(int arr[], int arr2[][3])
{
    printf("size of single array = %d\n",sizeof(arr)/sizeof(int));
    printf("size of double array = %d\n",sizeof(arr2)/sizeof(int));
}
