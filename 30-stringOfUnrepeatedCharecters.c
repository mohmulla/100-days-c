// program that finds the longest unrepeating charecters of substring
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "abcddefgg" };
	void stringWithoutRepeatingCharecters(char string[]);

	stringWithoutRepeatingCharecters(string);
	

//	printf("%s",string);


	return 0;
}

bool charecterExist(char charecter, char string[])
{
	bool charecterIsThere;

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (charecter == string[i])
		{
			charecterIsThere = true;
		}
		else
			charecterIsThere = false;
	}
	return charecterIsThere;
}

void stringWithoutRepeatingCharecters(char string[])
{
	
	char stack[20] = { " " };
	int stacker = -1;
	char stringOfNotRepeatedCharecters[20] = { " " };
	int counter = 0;

	bool charecterExist(char charecter, char string[]);

	// we iterate over each charecter in string
	// we iterate over each charecter in stack

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (!charecterExist(string[i], stack))
		{
			stacker++;
			stack[stacker] = string[i];
		}
		if (stacker < 18)
			stack[stacker + 1] = '\0';
	}

	for (int i = 0; string[i] != '\0'; i++)
	{
		counter = 0;

		for (int j = 0; string[j] != '\0'; j++)
		{
			if (string[i] == string[j])
				counter++;
		}

		if (i <= 18)
		{
			stringOfNotRepeatedCharecters[i + 1] = '\0';
		}

		if (counter == 1)
		{
			stringOfNotRepeatedCharecters[i] = string[i];
		}
		else if (counter == 2)
		{
			stringOfNotRepeatedCharecters[i] = string[i];
			break;
		}
		else
			break;

		
	}
	
	printf("%s\n", stringOfNotRepeatedCharecters);
	
}
