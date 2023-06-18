// program that finds that finds the largest number of 3
//

#include <stdio.h>

int main()
{
   // declare variables
    int number1;
    int number2;
    int number3;

    void CompareNumbers(int number1, int number2, int number3);

    // take input
    printf("enter number 1:");
    scanf("%i", &number1);

    printf("enter number 2:");
    scanf("%i", &number2);

    printf("enter number 3:");
    scanf("%i", &number3);


    // compare
    CompareNumbers(number1, number2, number3);
    
    return 0;
}

void CompareNumbers(int number1, int number2, int number3)
{
    if (number1 == number2)
    {
        if (number1 == number3)
            printf("all are equal %i", number1);
        else if (number1 < number3)
            printf("number %i is greatest", number3);
        else
            printf("number 1 and 2 are greatest");

    }
    else if (number2 == number3)
    {
        if (number1 > number2)
            printf("number 1 is greatest");
        else
            printf("number 2 and 3 are greatest");
    }
    else if (number1 == number3)
    {
        if (number2 > number1)
            printf("number 2 is greatest");
        else
            printf("number 1 and 3 are greatest");

    }
    else if (number1 < number2)
    {
        if (number2 < number3)
            printf("number 3 is greatest");
        else
            printf("number 2 is greatest");
    }
    else if (number1 < number3)
    {
        if (number2 > number3)
            printf("number 2 is greatest");
        else
            printf("number 3 is greatest");
    }
    else
        printf("number 1 is greatest");
        
}
