// program that increments a string of integers
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int digits[10] = {1,2,3,4,0,9,-1};

	void incrementString(int string[]);

	incrementString(digits);

	return 0;
}

void incrementString(int string[])
{
	int mockDigits[10];

	for (int i = 0; i < 10; i++)
	{
		if (string[i] == -1 )
		{
			if (string[i - 1] == 9)
			{
				string[i-1] = 0;
				string[i - 2] = string[i - 2] + 1;
			}
			else
			{
				string[i-1] = string[i-1] + 1;
				break;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (string[i] == -1)
			break;

		printf("%i", string[i]);
	}

}
