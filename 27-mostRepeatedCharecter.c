// program that finds the most repeated charecter in string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "abcdefghijklmb" };

	char repeatedCharecter(char string[]);

	printf("repeated charecter is : %c", repeatedCharecter(string) );
	
	return 0;
}

char repeatedCharecter(char string[])
{
	int counter = 0;
	char charecter = '0';
	char charecterMax;
	int count = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		charecter = string[i];

		for (int j = 0; string[j] != '\0'; j++)
		{
			if (charecter == string[j])
				counter++;

			if (counter > count)
			{
				charecterMax = charecter;
				count = counter;
			}
		}

		counter = 0;
	}
	return charecterMax;
	
}
