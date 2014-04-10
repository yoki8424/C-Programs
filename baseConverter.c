/*
 This program converts any number from base 10 any other base.
 By: Rodney T Anderson
 4/10/14
*/

# include<stdio.h>
# include<math.h>


int DecToBase(int base, int n);

int main(void)
{
	
    int i=0;
    int base= 16;
	
	
	for(i=0; i<=25; i++){
		printf("The decimal number %d base %d is %d  ", i,base, DecToBase( base, i) );
	
	printf("\n");
	}
	
	
	system("pause");
}



int DecToBase( int base, int n)
{
	int num = 0;
	int i=0;
	
	while(n != 0)
	{
		num = (pow(10,i) * (n%base) ) + num;
		n/=base;
		i++;
	}
		
	
	return num;
}
