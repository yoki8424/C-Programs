//This program creates random multiplication problems



#include <time.h>//for random number generator srand(), rand()
#include <stdlib.h> 
#include <stdio.h>
#include<string.h>


//Random answers / solutions for choices (a,b,c, or d)
int a;
int b;
int c;
int d;
char answerLetter;

//This function takes in the correct answer as input and assigns it randomly to one of the four options (a,b,c or d)
void answer_selection(int answer);


int main(){
	
	    // Seed the random generator
		srand(time(NULL));
		
		//Declaring the variables we want to use
		int x ; // returns a pseudo-random integer between 1 and 10 instead of RAND_MAX
		int y ; // returns a pseudo-random integer between 0 and 10 instead of RAND_MAX
		int answer ;
		char userInput;
		int correct=0;//the number of questions the user got correct
		int incorrect = 0;// the number of questions the user got wrong or incorrect
		
		int numQuestions = 10;
		int i;
		
		
		for(i=0; i<numQuestions; i++){
			
			//Create two random numbers to multiply together
			 x = rand()%10+1; // returns a pseudo-random integer between 1 and 10 instead of RAND_MAX
			 y = rand()%10+0; // returns a pseudo-random integer between 0 and 10 instead of RAND_MAX
			 answer = x * y;
			
			//Print question number 'i'
			printf("%d) %d x %d =\n",i+1, x, y);
			
			//Initializing random numbers/answers to a,b,c,& d
			a = rand()%10+1; // returns a pseudo-random integer between 1 and 10 instead of RAND_MAX (32767)
			b = rand()%10+1; // returns a pseudo-random integer between 1 and 10 instead of RAND_MAX
			c = rand()%10+1; // returns a pseudo-random integer between 1 and 10 instead of RAND_MAX
			d = rand()%10+0; // returns a pseudo-random integer between 0 and 10 instead of RAND_MAX
			
			answer_selection(answer);
			
			
			//Print Multiple Choice Answers
			printf("(a)%d		(b)%d\n",a,b);
			printf("(c)%d		(d)%d\n\n",c,d);
			
			//Get user answer
			printf("Answer:");
			scanf("%s", &userInput);
			printf("\n");// print a new line
			
			//check users answer
			if(tolower(userInput) == answerLetter)
				correct++;
			else
			  	incorrect++;
			
		}
	
	    //Print how many questions the user got wrong
	    printf("You got %d questions correct and %d questions incorrect \n", correct, incorrect);
	    
	return 0;
}

void answer_selection(int answer){
	
	int randomSelection = rand()%4; // This variable is initialized to a random number 0 to 3 inclusive (four options)
	
	if(randomSelection == 0){
			a = answer;
			answerLetter = 'a';
	}
	else if(randomSelection == 1){
		b = answer;
		answerLetter = 'b';
	}
	else if(randomSelection == 2){
		c = answer;
		answerLetter = 'c';
	}
	else{ // randomSelection == 3
		d = answer;
		answerLetter = 'd';
	}
}
