// program that converts hours to minutes
//

#include <stdio.h>

int main()
{
   // declare variables
    int hours;
    int minutes;
    int allMinutes;

    int hoursToMinutes(int hours);

    //2 take input 
    printf("hours:");
    scanf("%i", &hours);

    printf("minutes:");
    scanf("%i", &minutes);

    //3. convert hours to minutes
    allMinutes = hoursToMinutes(hours) + minutes;

    //4. display
    printf("all minutes = %i", allMinutes);

    return 0;
}

int hoursToMinutes(int hours)
{
    return 60 * hours;
}
