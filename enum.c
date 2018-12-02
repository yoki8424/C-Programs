// This program was used as an example of using enumeration

#include<stdio.h>

enum suit{
	clubs=10,
	diamonds=0,
	hearts,
	spades
}cards;

int main(){
	
	//enum suit cards;
	cards = spades;
	
	int i;
	for(i=diamonds; i<=clubs; i++)
	  printf("%d ", i);
	
	//printf("%d ", clubs);
	
	return 0;
}
