// program that returns a palindromic substring
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "fabbbbcbag" };
	void toUpper(char string[]);

	toUpper(string);
	

	printf("%s",string);


	return 0;
}

void toUpper(char string[])
{
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = string[i] - 32;
		}
	}
}
