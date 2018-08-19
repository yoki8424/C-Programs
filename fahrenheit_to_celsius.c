//Description: This is a program that converts a temperature that is in Fahrenheit entered
// by the user to Celsius

#include<stdio.h>

int main(){
	
	double fahr, cel;
	
	//Get the temperature in Fahrenheit.
	printf("Please enter the temperature in Fahrenheit. \n");
	scanf("%lf", &fahr);
	
	// Convert Fahrenheit to Celsius and print the result
	cel = (fahr-32)*5/9; // converting Fahrenheit to Celsius
	
printf("%.2lf degrees Fahrenheit = %.2lf degrees in Celsius. \n", fahr, cel);
	
	return 0;
}
