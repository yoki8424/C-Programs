// Description: This program finds the GCD or Greatest Common Divisor of two integers
// (the largest integer that can exactly divide both numbers without a remainder)

//In mathematics, the greatest common divisor or denominator (gcd) of two or more integers,
// when at least one of them is not zero, is the largest positive integer that divides the numbers without a 
//remainder. For example, the GCD of 8 and 12 is 4.

/*The Euclidean Algorithm is pretty straight forward: given two numbers, repeatedly replace the larger 
number with the greater number mod the lesser number.
Keep repeating the step until one of the two numbers reaches zero, the other number will then be the 
greatest common denominator (or greatest common divisor), the GCD.*/

//GCD(A,B)
//GCD(8,12)  --> 12 = 8 * a + remainder
//GCD(8,12)  --> 12 = 8 * 1 + 4
//GCD(4,8)   -->  8 = 4 * 2 + 0  
//Once we have a remainder of 0 we stop and print the previous remainder



//GCD(0,10) = 10 --> 0 = 10 * a + remainder 

# include <stdio.h>

int gcd(int a, int b); // where a < b
int main(void)
{
    int a,b;
    //Ask the user for input values for variables a and b
    printf("This program returns the Greatest Common Divsor of integers a, and b\n");
    printf("Input a:");
    scanf("%d", &a);// scan in the value for a
    printf("Input b:");
    scanf("%d", &b);// scan in the value for b
    
    //Print the GCD of inputs a and b
    printf("%d is the greatest common divisor\n", gcd(a,b));
    system("pause");
}
int gcd(int a, int b)
{
    //A check to find out which number is larger
	// and switch the varaibles such that the larger number 
	// is always the same variable.
	// NOTE: 'b' will always be the larger number, with this check and swap
    if(b < a) // a check to make sure a <= b
    {
        //Swap the values in a and b
         int temp = a;
         a = b;
         b = temp;
    }
    //Base Case is when a equals 0, this tells we are done
    if(a == 0)
      return b;
    else // Else return our recursive case
      return gcd(a, b%a);
}
