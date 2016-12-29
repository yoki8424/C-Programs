/*
   Title: Linked List
   Description: This program inserts a value into a linked list, searches for a value in a linked list, and prints the value(s) of the linked list
*/

#include<stdio.h> //malloc

//Struct to form a linked list of int(s)
struct ll {
	int data;
	struct ll *next;
};

//Define linked list functions
struct ll* insert_back(struct ll *front, int num);
struct ll* insert_front(struct ll *front, int num);
int search(struct ll*front, int val);
void print(struct ll*front);

struct ll* create_node(int num);

//Main Function
main(void){
	
	struct ll *list;
	list = NULL; // An empty linked list
	
	list = insert_front(list, 4);
	print(list);
	
	list = insert_front(list, 8);
	print(list);
	
	list = insert_back(list, 11);
	print(list);
	
	if( search(list, 3) == 1)
	  printf("Found the value 3 in the list. \n");
	else
	  printf("Did not find the value 3 in the list \n");
	  
		if( search(list, 4) == 1)
	  printf("Found the value 4 in the list. \n");
	else
	  printf("Did not find the value 4 in the list \n");
	
	
	system("pause"); // Comment out if not using Windows operating systems
}

struct ll* create_node( int num){
	
	struct ll *temp;
	
	//Create temporary node
	temp = (struct ll*)malloc(sizeof(struct ll));
	temp->data = num;
	temp->next = NULL;
	
	return temp;
}

struct ll* insert_front(struct ll *front, int num){
	
	struct ll *temp = create_node( num);
	temp->next = front;
	
	return temp;

}

struct ll* insert_back(struct ll *front, int num){
	
	struct ll *temp = create_node( num);//Create temporary node
	struct ll *begin = front; //Store front of the linked list
	
	//Check if we are inserting into a empty or NULL list
	if(front == NULL)
	   return temp;
	
	//Iterate through the linked list until we reach the last node
	while(front->next != NULL){
		front = front->next;
	}
	
	//Insert temp into the list
	front->next = temp;
	
	return begin;// return the pointer to the front of the list
}

int search(struct ll*front, int val){
	
	//Iterate through the linked list until we reach the last node
	while(front->next != NULL){
		
		if(front->data == val) // value was found in list return 1
		   return 1; 
		   
		front = front->next;
	}
	
	return 0; // value was not found in list return 0
}

void print(struct ll*front){
	//Iterate through the linked list until we reach the last node
	while(front != NULL){
		printf("%d ", front->data);
		front = front->next;
	}
	printf("\n");
}

