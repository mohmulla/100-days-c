// program that finds the absolute differance of 51
//

#include <stdio.h>

int main()
{
   // declare variables
    int number;

    int Absolute51Difference(int number);
   
   
    // take input
    printf("number: ");
    scanf("%i", &number);

    printf("absolute difference = %i \n", Absolute51Difference(number) );
    return 0;
}

int Absolute51Difference(int number)
{
    int absoluteDifference;

    if (number > 51)
    {
        absoluteDifference = number - 51;

        return absoluteDifference * absoluteDifference * absoluteDifference;
    }
    else
    {
        absoluteDifference = 51 - number;

        if (absoluteDifference < 0)
            absoluteDifference = -absoluteDifference;

        return absoluteDifference * absoluteDifference;
    }
    
}
