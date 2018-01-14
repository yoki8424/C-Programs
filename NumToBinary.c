/*
   Take any number in base 10 and convert it to binary
   Ex: .625 to binary is .101
   Ex2: 5 to binary is 101
   Ex3: 5.625 to binary is 101.101

*/

#include<stdio.h>

double OriginalNum;

int toBinary(int decimalNo); //Converts an integer to binary
double DecToBin(double decNum); //Converts a fraction to binary

int main(void){
	
	double num = 5.1;
	int Int_num = (int)num;
	double Float_num = num - (double)Int_num;
	double answer = (double)(toBinary(Int_num) + DecToBin(Float_num));
	OriginalNum = Float_num;
	
	

	printf("%lf converted to binary is %lf \n", num, answer);
}

toBinary(int decimalNo){
	
	//Base Case
	if(decimalNo < 2)
		return decimalNo;
		
	//Recursive Case
	return toBinary(decimalNo / 2) * 10 + decimalNo%2;
}

double DecToBin(double decNum){
	
	double currentNum = decNum * 2.0;
	double remainder = ((int)currentNum) % 2;
	
	
	//Base Case
	if(currentNum == 1 || currentNum == OriginalNum)
		return remainder / 10;
		
	//Recursive Case
	return DecToBin( currentNum - remainder)/ 10 + remainder/10;
	
}
