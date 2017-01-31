/*
   Variables
   By: randerson112358
*/

#include <stdio.h>

int main(){
	
	int a;
	float b;
	char c;
	double d;
	
	
	/*printf("This is a int %d \n", a);
	printf("This is a float %.1f \n", b);
	printf("This is a char %c \n", c);
	printf("This is a double %.2lf \n", d);*/
	
	printf("Enter value for char variable \n");
	scanf("%c", &c);
	
	printf("Enter value for int variable \n");
	scanf("%d", &a);
	
	printf("Enter value for float variable \n");
	scanf("%f", &b);
	
	printf("Enter value for double variable \n");
	scanf("%lf", &d);
	
	printf("%c %d %.2f %.1lf \n",c,a,b,d );
	
	
	
	return 0;
}
