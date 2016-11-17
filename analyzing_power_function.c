
/* 
    Analyzing Functions
    
    Description: This program analyzes two functions, that give the same result runtime.
*/

int pow(int x, int n); // This function returns x^n O(log(n)) time
int pow2(int x, int n); //This function returns x^n in O(n) time



int pow3(int x, int n); 
int pow4(int x, int n); 


int main(void)
{
	int n= 15;
	int i;
	
	printf("ALGORITHM #1 \n");
	printf("Input Size \t Number of calls \t Output\n");
	
	for( i=0; i<=n; i++)
	   printf("%d \t\t %d \t\t\t 3^%d = %d \n", i, pow3(3,i), i, pow(3,i));
	   
	printf("ALGORITHM #2 \n");
	printf("Input Size \t Number of calls \t Output\n");
	
	for( i=0; i<=n; i++)
	   printf("%d \t\t %d \t\t\t 3^%d=%d \n", i, pow4(3,i),i, pow2(3,i));
}


//T(n) = T(n/2) + C1, T(1) = C2
int pow(int x, int n){
	
	if(n == 0)
		return 1;
		
	if(n == 1)
		return x;
		
	if(n %2 == 0)
		return pow(x * x, n/2);
	else
		return pow(x * x, n/2) * x;
}

// T(n) = T(n-1) + C1, T(1) = C2
int pow2(int x, int n){
	
	if(n == 0)
		return 1;
		
	if(n == 1)
		return x;
		
	return x * pow2(x, n-1);
}



//ANALYSIS
//This function shows the running time of the 'pow' function above
int pow3(int x, int n){
	
	int c = 1;
	if(n == 0)
		return 1;
		
	if(n == 1)
		return 1;
		
    
	if(n %2 == 0)
		return pow3(x * x, n/2) + c;
	else
		return pow3(x * x, n/2) + c;
}

//This function shows the running time of the 'pow2' function above
int pow4(int x, int n){
	
	int c = 1;
	if(n == 0)
		return 1;
		
	if(n == 1)
		return 1;
	
	//c++;	
	return c + pow4(x, n-1);
}
