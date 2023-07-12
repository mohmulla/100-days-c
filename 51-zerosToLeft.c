// program that implements several functions
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int arrayOfIntegers[10] = { 1,2,3,5,5,0,5,8,9,0 };

	void zerosToLeft(int a[]);
	void printArray(int a[]);
	void zerosToRight(int a[]);
	void evenBeforeOdd(int a[]);
	bool nextToFive(int a[]);

	printArray(arrayOfIntegers);

	zerosToLeft(arrayOfIntegers);

	printArray(arrayOfIntegers);

	zerosToRight(arrayOfIntegers);

	printArray(arrayOfIntegers);

	evenBeforeOdd(arrayOfIntegers);

	printArray(arrayOfIntegers);

	printf("%i", nextToFive(arrayOfIntegers));


	return 24;
}

void printArray(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%i ", a[i]);
	}
	printf("\n");
}

void zerosToLeft(int a[])
{
	int position = 0;

	for (int i = 0; i < 10; i++)
	{
		if (a[i] == 0)
		{
			a[i] = a[position];
			a[position] = 0;
			position++;
		}
	}
}

void zerosToRight(int a[])
{
	int position = 9;

	for (int i = 9; i > -1 ; i--)
	{
		if (a[i] == 0)
		{
			a[i] = a[position];
			a[position] = 0;
			position--;
		}
	}
}

void evenBeforeOdd(int a[])
{
	int position = 0;
	int temp;

	for (int i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
		{
			temp = a[position];
			a[position] = a[i];
			a[i] = temp;
			position++;

		}
	}
}

bool nextToFive(int a[])
{
	bool nearFive = false;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] == 5)
		{
			if ( a[i + 1] == 5 || a[i - 1] == 5)
			{
				nearFive = true;
			}
			if (a[i + 1] != 5 && a[i - 1] != 5)
				nearFive = false;
		}
		
	}
	return nearFive;
}
