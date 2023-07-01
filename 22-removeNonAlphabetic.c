// program that removes non alphabetic from string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "w3resorces" };

	void RemoveNonAlphabetic(char string[]);


	RemoveNonAlphabetic(string);
	
	return 0;
}

void RemoveNonAlphabetic(char string[])
{
	int i;
	int j = 0;

	for ( i = 0; string[i] != '\0'; i++)
	{
		if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
		{
			string[j] = string[i];
			j++;
		}
	}
	string[j] = '\0';

	printf("%s\n", string);
}
