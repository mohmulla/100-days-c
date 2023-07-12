// program that checks for triple
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int numbers[10] = { 1,3,2,3,5,6,7,2,2,2 };
	int numbersLength = 10;

	int isTriple(int string[], int length);

	printf("%i", isTriple(numbers, numbersLength));

	return 24;
}

int isTriple(int string[],int length)
{
	for (int i = 0; i < length-2 ; i++)
	{
		if ( string[i + 1] == string[i] && string[i + 2] == string[i])
			return i;
	}

	return false;
}
