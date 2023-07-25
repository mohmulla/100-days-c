// program that returns the sum of integers in array except 7
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int aray[6] = { 5,5,5,7,5,10 };

	int sumOfElements(int string[], int length);
	bool sumOfFives(int string[], int length);
	
	
	printf("%i\n", sumOfElements(aray, 6));
	printf("%i\n", sumOfFives(aray, 6));

	return 0;
}

int sumOfElements(int string[], int length)
{
	int count = 0;

	if (length == 0)
		return 0;

	for (int i = 0; i < length; i++)
	{
		if (string[i] != 7)
			count = count + string[i];
	}

	return count;
}

bool sumOfFives(int string[], int length)
{
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (string[i] == 5)
			count = count + string[i];
	}

	if (count == 15)
		return true;
	else
		return false;
}
