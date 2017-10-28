/*
This program counts the number of 2s that appear in all numbers between 0 and n (inclusive)
 Input: 25
 Output: 9, reasoning is because (2, 12, 20, 21, 22, 23, 24, and 25. NOTE: that 22 counts for two 2s)
*/

int count = 0;
void count2s(int x);

int main(){
	int n = 22;
	int i;
	
	for(i=0; i<=n; i++){
		count2s(i);
	}
	
	printf("Count = %d \n", count);
	
	return 0;
}


//This Function counts the number of 2's
void count2s(int x){
	
	if(x <= 0)
	   return ;
	   
	if(x%10 == 2)  
	  count++;
	  
	count2s(x/10);
}
