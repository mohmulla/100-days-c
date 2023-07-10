// program that converts from roman to decimal
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char number[10] = { "mcmxciv" };

	int romanToDecimal(char string[]);

	printf("%i", romanToDecimal(number));

	return 0;
}

int romanToDecimal(char string[])
{
	int decimal = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == 'i')
		{
			if (string[i + 1] == 'v')
			{
				decimal = decimal + 4;
				i++;
			}
			else if (string[i + 1] == 'x')
			{
				decimal = decimal + 9;
				i++;
			}
			else
				decimal = decimal + 1;
		}
		else if (string[i] == 'v')
		{
			decimal = decimal + 5;
		}
		else if (string[i] == 'x')
		{
			if (string[i + 1] == 'l')
			{
				decimal = decimal + 40;
				i++;
			}
			else if (string[i + 1] == 'c')
			{
				decimal = decimal + 90;
				i++;
			}
			else
				decimal = decimal + 10;
		}
		else if (string[i] == 'l')
		{
			decimal = decimal + 50;
		}
		else if (string[i] == 'c')
		{
			if (string[i + 1] == 'd')
			{
				decimal = decimal + 400;
				i++;
			}
			else if (string[i + 1] == 'm')
			{
				decimal = decimal + 900;
				i++;
			}
			else
				decimal = decimal + 100;
		}
		else if (string[i] == 'm')
		{
			decimal = decimal + 1000;
		}
		else
			decimal = decimal + 0;
	}

	return decimal;
}
