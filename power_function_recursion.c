/* 
   This program takes in two integer values and return the exponent equivalence
   
   For Example:
   input is 2 and 3 , and the function returns 2^3 = 8 ===> 2 * 2 * 2
   input is 3 and 3 , and the function returns 3^3 = 27 ===> 3 * 3 * 3
   
*/

int pow(int x, int y); // This will return x^y

int main(){
	
	int x= 3;
	int y= 3;
	
	printf("%d^%d = %d \n", x,y, pow(x,y) );
	
	return 0;
}

int pow(int x, int y){
	
	if(y == 0)
		return 1;
		
	if(y == 1)
		return x;
		
	return pow(x, y-1) * x;
	
}
