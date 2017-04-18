#include <stdio.h>
#include <string.h>
# include <stdlib.h>

#define ARRAY_SIZE 26
#define LEN 45

typedef struct node{
	char word[LEN];
	struct node* next;
	
}node;

node* create_node(char* word);
int getIndex(char key);
int insert_into_hashTable(node* new_node);
void print(node *front);

node* insert(node *front, char* num);

int load(const char* dictionary, node** hashTable);



int main(void){
    
    node* hashTable[ARRAY_SIZE] = {NULL};// Setting all elements in the array to NULL
    
    node* head = NULL;
    

//	hashTable[getIndex('h')] = insert(hashTable[getIndex('h')], "hi");
//	hashTable[getIndex('h')] = insert(hashTable[getIndex('h')], "hello");
	
	load("hello", hashTable);
	print(hashTable[getIndex('h')]);
	
	return 0;
}

// Pre-condition: front points to the head of a linked list structure and
//                and num is the value to be inserted into that list.
// Post-condition: num will be inserted into the list pointed to by front,
//                 in numerical order and a pointer to the front of the
//                 adjusted list will be returned.
node* insert(node *front, char* num) {

  node *iter;

  // Create the new node to add.
  node* temp = (node*)malloc(sizeof(node));
 // temp->word= (char*) malloc(LEN*sizeof(char))
 // printf("Before ");
  strcpy( temp->word , num );
 // printf("After ");
  temp->next = NULL;

  // Inserting into an empty list.
  if (front == NULL)
    return temp;

  // Inserted element goes at the front of the list.
  if (strcmp(temp->word , front->word) < 0) {
    temp->next = front;
    return temp;
  }

  // Iterate iter to point to the node BEFORE where the node to insert
  // should go.
  iter = front;
  while (iter->next != NULL && strcmp(temp->word ,iter->next->word) > 0 )
    iter = iter->next;

  temp->next = iter->next; // Attach the new node's next pointer.
  iter->next = temp; // Patch the previous node to the new node.
  return front;

}

//Creates a node, specifically takes in a word and places that data into a node
node* create_node(char* word){
	
	node* new_node = (node*)malloc(sizeof(node));
	strcpy( new_node->word , word );
	new_node->next = NULL;
	
	return new_node;
}

//Get the index location for the word e.g. word = "hello" index should  map to 'h', h - 97 = index
int getIndex(char key){
	int hash = (int)key - 97;
	
	return hash%ARRAY_SIZE;
}


void print(node *front) {

  while (front !=NULL) {
    printf("%s ", front->word);
    front = front -> next;
  }
  printf("\n");
}

int load(const char* dictionary, node** hashTable){

	hashTable[getIndex(dictionary[0])] = insert(hashTable[getIndex(dictionary[0])], dictionary);
	

}

