// program that finds the longest word in string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "the longest word in stringerst and longestwords afters" };

	void lowerToUpper(char string[]);


	lowerToUpper(string);
	printf("%s", string);
	
	return 0;
}

void lowerToUpper(char string[])
{
	char c = 'A';
	char a = 'a';
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ')
			string[i] = string[i] - 32;
	}
	
}
