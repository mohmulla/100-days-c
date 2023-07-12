// program that finds the nearest to 100
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int nearestToHundred(int i1, int i2);

	printf("%i", nearestToHundred(101,98));

	return 0;
}

int absoluteValue(int number)
{
	if (number < 0)
		return -number;
	else
		return number;
}

int nearestToHundred(int i1, int i2)
{
	int absoluteValue(int number);

	if (absoluteValue(100 - i1) < absoluteValue(100 - i2))
		return i1;
	else
		return i2;
}
