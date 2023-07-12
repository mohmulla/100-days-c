// program that checks if number is multiple of 3,7 and not both
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	bool isMultipleOf3Or7(int number);

	printf("%i", isMultipleOf3Or7(21));

	return 24;
}

bool isMultipleOf3Or7(int number)
{
	if (number % 3 == 0 && number % 7 != 0)
	{
		return true;
	}
	else if (number % 7 == 0 && number % 3 != 0)
		return true;
	else
		return false;
}
