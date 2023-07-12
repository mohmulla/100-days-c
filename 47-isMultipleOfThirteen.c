// program that checks if number is multiple of 13 or greater by 1
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	bool isMultipleOfThirteen(int number);

	printf("%i", isMultipleOfThirteen(26));

	return 24;
}

bool isMultipleOfThirteen(int number)
{
	return (number % 13 == 0 || number % 13 == 1);
}
