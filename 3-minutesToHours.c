// program that converts minutes to hours
//

#include <stdio.h>

int main()
{
   // declare variables
    int minutes;
    int hours;
   
   
    // take input
    printf("minutes: ");
    scanf("%i", &minutes);

    // convert minutes to hours
    for (hours = 0; minutes >= 60; hours++)
    {
        minutes = minutes - 60;
    }

    // display
    printf("hours= %i\nminutes= %i", hours, minutes);

    return 0;
}
