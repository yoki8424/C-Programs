/*
  This program determines if a year is a leap year
*/

# include <stdio.h>

// The start date of the first calendar
# define  CALENDAR_START 1582


int main(void)
{
  int year, month;
  
  // Get date information
  printf("\nEnter year: ");
  scanf("%d", &year);
 
  // Validate user input
  if( (year < CALENDAR_START) )
  {
    printf("Bad Input: %d \n", year);
    system("pause");
    return; 
  }
  
  
  // Determine if the year is a leap year, 0 is false and 1 is true, default value is 0 for false
  int isDivisibleBy4 = 0, isDivisibleBy100 = 0, isDivisibleBy400 = 0;
  int isLeapYear = 0;
  
  if(year % 4 == 0)
   isDivisibleBy4 = 1;
  
  if(year % 100 == 0)
   isDivisibleBy100 = 1;
  
  if(year % 400 == 0)
   isDivisibleBy400 = 1;
   
   if(isDivisibleBy4 == 1 || isDivisibleBy100 == 1 || isDivisibleBy400 == 1)
     isLeapYear = 1;
    
   if(isLeapYear == 1) 
   printf("%d is a leap year\n", year);
   else
    printf("%d is NOT a leap year\n", year);
    
     system("pause");
 }
