// program that finds that compares 2 numbers
//

#include <stdio.h>

int main()
{
   // declare variables
    int number1;
    int number2;

    void CompareNumbers(int number1, int number2);

    // take input
    printf("enter number 1:");
    scanf("%i", &number1);

    printf("enter number 2:");
    scanf("%i", &number2);


    // compare
    CompareNumbers(number1, number2);
    
    return 0;
}

void CompareNumbers(int number1, int number2)
{
    if (number1 == number2)
    {
        printf("equals");
    }
    else
        printf("!equal");
}
