#include<stdio.h>
#include<string.h> // strlen(), strcmp()

int main(){
	
	//Define A String
	char name[] = "Tom Smith";
	char name2[10] = "Tom Smith"; 
	char *name3 = "Tom Smith";
	int age = 36;
	
	//Printing a String
	printf("Hi my name is %s and I am %d years old \n", name , age);
	
	
	int length = strlen(name2);
	//Printing a String
	printf("The variable name2= %s and has size %d. \n", name2 , length);
	
	//Compare Strings
	if( strcmp(name, name3)  == 0){
		printf("name equals name3 \n");
	}
	else
	{
		printf("name does NOT equal name3 \n");
	}
	
	//Scan in a string
	printf("What's your name ?");
	scanf("%s", &name);
	
	printf("\n Your name is %s", &name);
	
	
	
	return 0;
}
