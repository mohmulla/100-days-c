// program of that replaces all words in string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "i.love.programming.very.much" };
	
	void ReverseWordsInString(char string[]);
	
	ReverseWordsInString(string);

	
	return 0;
}

void ReverseWordsInString(char string[])
{

	char tempString[81];

	int dotcount = 0;
	int dotCounter = 0;
	int j = 0;
	int i = 0;

	// count the dots
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == '.')
			dotcount++;
	}

	while (dotcount > -1)
	{
		for ( i = 0; string[i] != '\0'; i++)
		{

			if (string[i] == '.')
				dotCounter++;

			if (dotCounter == dotcount && string[i] != '.')
			{
				tempString[j] = string[i];
				j++;
			}
			
			//printf("%s\n", tempString);
			
		}
		tempString[j] = '.';
		j++;
		dotcount--;
		dotCounter = 0;

	}

	tempString[i] = '\0';

	printf("%s", tempString);
}
