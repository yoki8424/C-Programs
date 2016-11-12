# include <stdio.h> 

int main(void)
{
    printf("Please enter a time in min. and I will convert it into hours and minutes: ");
    int timeInMinutes;
    scanf("%d", &timeInMinutes);
    
    int hours = timeInMinutes/60;
    int minutes = timeInMinutes%60;
    
    printf("%d hours and %d minutes\n",hours, minutes);
    system("pause");
}
