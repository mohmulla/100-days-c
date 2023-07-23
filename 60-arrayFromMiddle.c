// program that prints right half of given array
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int aray[6] = { 1,3,5,7,9,10 };

	void arrayFromMiddle(int string[], int length);
	
	arrayFromMiddle(aray, 6);

	return 0;
}

void arrayFromMiddle(int string[], int length)
{
	int index = length / 2;
	int aray[3];

	for (int i = 0; i < 3; i++)
	{
		aray[i] = string[index];
		index++;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%i ", aray[i]);
	}
}
