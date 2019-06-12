/*
   This program is a game to test your memory. 
*/

# include <stdio.h>// defines scanf() and printf() and getchar()
# include <stdlib.h>//defines rand()
# include <time.h>//defines time()
# include <ctype.h>// defines isspace()

int n = 10;// The size of the board
char arr[10][10];//The Board 10 x 10
int numAnswers=0; // The number of answers on the board 
char *userAnswer; // The users input 
int correct = 0; // Get the number of correct answers

//Function To Get The Users Answer
void getUserInput()
{
	int i, j, cnt=0;
	char character;
	//Get the user input and store it in the variable userAnswer
	for(i=0; i<numAnswers; i++){
		
		character = getchar();// Get the user input and store it in variable character
		
		while(isspace(character)){character = getchar();}//While the input is a space get the next character
		
		userAnswer[i] = character;//Store the users input that isn't a space (I assume the user will only input spaces and the actual number)
	}
	
	//Check the user answer with the actual / correct answer 
	for(i=0; i<n; i++){
	  for(j=0; j<n; j++)
       {          if(arr[i][j] != '.'){// If this statement is true then we found a number
                   	if(userAnswer[cnt] == arr[i][j]){// Check if the found number is equal to the users answer at position 'cnt'
                   		correct++; // If the user got it right, then increment correct by 1
					}
				  cnt++; // A number was found (because this is in the if statement) so increment cnt by 1
			}
       }
	}
}

//Print the correct answer
void printCorrectAnswer(){
	int i,j;
	
	printf("\n");
	for(i=0; i<n; i++){
	  for(j=0; j<n; j++)
       {          if(arr[i][j] != '.')
                  printf("%c ", arr[i][j]);
       }
	}
	printf("\n");
}

//Funtion To Return The ASCII Value Of A Number From 0 - 9
//NOTE: the values start from 48 - 57, for integer values 0 -9
//NOTE: The input should be a value from 0 - 9
char getASCII(int num){
	
	char charNum='0';
	int i;
	
	for(i=0; i<=9; i++){
		if(num == i)
		  return i + 48;
	}
	
	// If for some reason num isn't a number from 0 - 9 just return '0'
	return charNum;
}

//Function To Create A Empty Board (Without The Random Numbers)
void createNewBoard(){
	
	int i,j;
	
	for(i=0; i<n; i++)
     for(j=0; j<n; j++)
       {
                  arr[i][j] = '.'; 
       }
}

//Function To Print The Board To The Screen
void printBoard(){
	
	int i,j;
	
	for(i=0; i<n; i++){
	  for(j=0; j<n; j++)
       {
                  printf("%c ", arr[i][j]);//Printing the characters on the board
       }
       printf("\n");
	}   	
}

// Function To Set The Board Up With Random Numbers
void setupBoard(){
	
	int seed = time(NULL);
    srand(seed);// seeding random 
    int i;// index
    int iRandom=rand()%n + 0, jRandom =rand()%n + 0; // iRandom and jRandom are random number board indexes that range from 0 to 9;
    int randomN = rand()%n + 1; // This will contain the count of total numbers displayed on the grid/board (max = 10, min=1)
    
    //Store the count of the total numbers displayed on the grid/board in numAnswers
    numAnswers = randomN;
    
    //Create an array to store the correct values in order
    userAnswer = (char*)malloc(numAnswers*sizeof(char));
    
    //Create a new board to fill the grid with the '.' character
    createNewBoard();
    
    //Fill the board with random numbers (aka number characters) at random indexes (iRandom & jRandom)
    // The number of possible "random numbers" on the board will be "randomN"
     for(i=0; i<randomN; i++)
       {
       			//Initializing random indexes for the random number to be placed within the grid/board.
       			jRandom =rand()%n + 0;
       			iRandom =rand()%n + 0;
       			
       			//While the character at the position arr[iRandom][jRandom] is not the '.' character 
       			//change the random indexes to a different random value, because there is already 
       			// a number (aka number characters) at that position. 
       		    while(arr[iRandom][jRandom] != '.'){
       		    	jRandom =rand()%n + 0;
       			    iRandom =rand()%n + 0;
				}
				
				if(arr[iRandom][jRandom] == '.'){
					//Add the random number (aka number character) to the at the random position arr[iRandom][jRandom]
					arr[iRandom][jRandom] = getASCII(rand()%n + 0); 
				}        
       }
}

//Function To Print Directions / Gameplay
void printDirections(){
	char begin;
	printf("***** Welcome To The Randerson112358 Memory Game !! *****\n");
	printf("How To Play: \n");
	printf("(0)Remember all of the values in order from top to bottom & left to right. \n");
	printf("(1)Input the numbers that came first from top to bottom & left to right.  \n");
	printf("(2)You will get a score of how many you got right and wrong and how long it took ya!  \n\n");
	printf("NOTE: You only have 3 seconds to remember the board \n");
	printf("Example:\n");
	printf("1 . . . 5\n");
	printf(". 2 . 3 6\n");
	printf("8 . 9 . .\n");
	printf("1 . . . 4\n");
	printf("1 . 8 . 5\n");
	printf("\nThe above board would have a correct output of:\n[1,5,2,3,6,8,9,1,4,1,8,5]\n\n\n");
	printf("Press 'Enter' to begin !");
	scanf("%c", &begin);
}

int main(void){

	printDirections();//Print gameplay/directions
	setupBoard();//Setup the board
	clock_t before = clock()/1000; // Time before in seconds
	clock_t after = clock()/1000; //  Time after in seconds
	printBoard();// Print the board
	while(after - before < 3){after = clock()/1000;}//Wait 3 seconds, before going to the next statement
	system("cls");//Clear the screen
	getUserInput();// Get the users answer
	printf("\nThe Correct Answer Is: ");
	printCorrectAnswer();	
	printf("\nCorrect Score= %d \n", correct);
	system("Pause");
}
