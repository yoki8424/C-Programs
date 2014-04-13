/*
  This program computes the number of days in a user-specified month
*/

# include <stdio.h>

// The months in a year represented by numbers 1 - 12
# define  JANUARY 1
# define  FEBRUARY 2
# define  MARCH 3
# define  APRIL 4
# define  MAY 5
# define  JUNE 6
# define  JULY 7
# define  AUGUST 8
# define  SEPTEMBER 9
# define  OCTOBER 10
# define  NOVEMBER 11
# define  DECENBER 12

// The start date of the first calendar
# define  CALENDAR_START 1582



int main(void)
{
  int year, month;
  
  // Get date information
  printf("\nEnter year: ");
  scanf("%d", &year);
  printf("Enter month: ");
  scanf("%d", &month);
  
  // Validate user input
  if( (year < CALENDAR_START) || (month < 1 ) || (month > 12))
  {
    printf("Bad Input: %d %d\n", year, month);
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
     
  // Use month and year information to determine number of days 
  int days = 0;
  if(month == JANUARY || month == MARCH || month == MAY || month == JULY || month == AUGUST || month == OCTOBER || month == DECEMBER)
    days = 31;
  else if(month == APRIL || month == JUNE || month == SEPTEMBER || month == NOVEMBER)
    days = 30;
  else if(month == FEBRUARY)
     if(isLeapYear == 1)
       days = 29; 
     else
       days = 28;
       
  printf("Month %d in year %d has %d days\n", month,year,days);
    
  system("pause");
}
