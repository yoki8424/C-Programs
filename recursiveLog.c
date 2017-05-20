/*
   Description: This is a recusrsive logarithmic program
*/

# include <stdio.h>

//Declare the recurisve log function
int logB(int base, int val);//log2(8) == 3 , 2 is our base, 8 is our val, 3 is the integer that we return

int main(){
	
	int base = 2;
	int value = 1024;
	int answer = logB(base, value);
	
	printf("log base %d with value %d = %d \n", base, value, answer);
	return 0;
}


//log2(1) = 0 ==> 2^0 = 1
/*
   2^3 = 2 * 2 *2 = 8   <== 1 + log(8/2); ==> 1 + 2 = 3
   log2(8) = 3, 8/2 = 4 <== 1 + log(4/2); ==> 1 + 1 = 2
                4/2 = 2  <== 1 + log(2/2); == > 1 + 0= 1
                2/2 = 1 <== our base case return 0
*/
int logB(int base, int val){
	
	//base case
	if( val == 1)
	  return 0;
	  
	  //recursive case
	  return 1 + logB(base, val/base);
}
