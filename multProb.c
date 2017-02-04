//Library
# include <stdio.h>

int main(){
	
	int myAnswer;
	int a=6, b=100;
	
	printf("What is %d x %d = ? \n", a, b);
	scanf("%d", &myAnswer);
	
	if(myAnswer == a * b){
		printf("Correct ! \n");
	}
	else if(myAnswer < a * b){
		printf("Wrong, your answer %d is less than the correct answer %d \n", myAnswer, a*b);
	}
	else if(myAnswer > a * b){
		printf("Wrong, your answer %d is greater than the correct answer %d \n", myAnswer, a*b);
	}
	else{
		printf("Wrong ! \n");
	}
	
	return 0;
}
