// program that calculates the sum of numbers except if between 10 and 20 and not equal to 13 or 17
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int sumOfThreeIntegers(int i1, int i2, int i3);

	printf("%i", sumOfThreeIntegers(4,5,7));

	return 24;
}

int sumOfThreeIntegers(int i1, int i2, int i3)
{
	if (i1 >= 10 && i1 <= 20 && i1 != 13 && i1 != 17)
		i1 = 0;
	if (i2 >= 10 && i2 <= 20 && i2 != 13 && i2 != 17)
		i2 = 0;
	if (i3 >= 10 && i3 <= 20 && i3 != 13 && i3 != 17)
		i3 = 0;

	return i1 + i2 + i3;
}
