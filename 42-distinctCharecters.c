// program that finds the distinct charecters in a string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "geeksforgeeks" };
	void distinctCharecters(char string[]);

	distinctCharecters(string);

	return 0;
}

void distinctCharecters(char string[])
{
	char stack[26];
	int stacker = -1;
	int j;

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (stacker == -1)
		{
			stacker++;
			stack[stacker] = string[i];
		}
		for ( j = 0; j < stacker; j++)
		{
			if (string[j] == string[i])
				break;
		}
		if (string[j] != string[i])
		{
			stacker++;
			stack[stacker] = string[i];
		}
	}
	stack[stacker + 1] = '\0';

	printf("%s", stack);
}
