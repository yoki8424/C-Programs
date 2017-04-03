
//Description: This program shows if a year is a leap year or not.
/*
   How to know if a year is a Leap Year:
yes|	Leap Years are any year that can be evenly divided by 4 (such as 2012, 2016, etc)
no |	except if it can be evenly divided by 100, then it isn't (such as 2100, 2200, etc)
yes|	except if it can be evenly divided by 400, then it is (such as 2000, 2400)

*/

# include <stdio.h>

int main(){
	
	int year;

	printf("Please enter a year to check if it is a leap year\n");
	scanf("%d", &year);

	if(year%400 == 0){
		//Is leap year
		printf("%d is a leap year \n", year);
	}
	else if(year % 100 == 0){
		//is NOT leap year
		printf("%d is NOT a leap year \n", year);
	}
	else if(year %4 == 0){
		//is leap year
		printf("%d is a leap year \n", year);
	}
	else
	{
		//is not leap year
		printf("%d is NOT a leap year \n", year);
	}

	return 0;
}
