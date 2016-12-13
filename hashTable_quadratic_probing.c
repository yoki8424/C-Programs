/*
  This program creates a hash table inserts 7 values using the quadratic probing method.
  12/12/2016
*/

#include<stdio.h>
#include<stdlib.h>

 //The size of the hash table
int SIZE = 7;//NOTE: for quadratic probing the size must be a primary number to make sure we can insert key on collisions and hash table must be at least half empty

int main(){
  int hashtable[SIZE]; //Creating the hash table
  int empty[7]  = { NULL }; // initialize all elements in empty array to -1, NOTE: had to use a numeric value '7' instead of variable 'SIZE' for this syntax
  
  int i;
  for(i=0; i<SIZE; i++)
  {
     quadratic_probing_insert(hashtable, i+4, empty);
  }
  
  //Print the array
  for(i=0; i<SIZE; i++)
  {
    printf("%d ", hashtable[i]);
  }
  printf("\n"); //print new line
  
  return 0;
}

/*
1. Get the key k
 2. Set counter j = 0
 3. Compute hash function h[k] = k % SIZE
 4. If hashtable[h[k]] is empty
         (4.1) Insert key k at hashtable[h[k]]
         (4.2) Stop
    Else
        (4.3) The key space at hashtable[h[k]] is occupied, so we need to find the next available key space
        (4.4) Increment j
        (4.5) Compute new hash function h[k] = ( k + j * j ) % SIZE
        (4.6) Repeat Step 4 till j is equal to the SIZE of hash table
 5. The hash table is full
 6. Stop
*/

int quadratic_probing_insert(int *hashtable, int key, int *empty)
{
    /* hashtable[] is an integer hash table; empty[] is another array which indicates whether the key space is occupied;
       If an empty key space is found, the function returns the index of the bucket where the key is inserted, otherwise it 
       returns (-1) if no empty key space is found */

    int i, index;

    for (i = 0; i < SIZE; i++) {
        index = (key + i*i) % SIZE;
        if (empty[index] == NULL) {
            hashtable[index] = key;
            //printf("empty[%d] = %d \n", index, empty[index]);
            //printf("hashtable[%d] = %d \n", index, hashtable[index]);
            empty[index] = 0;
            return index;
        }
    }
    return -1;
}

/*
1. Get the key k to be searched
 2. Set counter j = 0
 3. Compute hash function h[k] = k % SIZE
 4. If the key space at hashtable[h[k]] is occupied
         (4.1) Compare the element at hashtable[h[k]] with the key k.
         (4.2) If they are equal
         (4.2.1) The key is found at the bucket h[k]
         (4.2.2) Stop
    Else
         (4.3) The element might be placed at the next location given by the quadratic function
         (4.4) Increment j
         (4.5) Set k = ( k + (j * j) ) % SIZE, so that we can probe the bucket at a new slot, h[k].
         (4.6) Repeat Step 4 till j is greater than SIZE of hash table
 5. The key was not found in the hash table
 6. Stop
*/

int quadratic_probing_search(int *hashtable, int key, int *empty)
{
    /* If the key is found in the hash table, the function returns the index of the hashtable where the key is inserted, otherwise it 
       returns (-1) if the key is not found */

    int i, index;

    for (i = 0; i < SIZE; i++) {
        index = (key + i*i) % SIZE;
        if (!empty[index] && hashtable[index] == key)
            return index;
    }
    return -1;
}
