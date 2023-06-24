// program of Function that subtrings charecters
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81];
	char charecters[81];

	void Substring(const char string[], int start, int numberOfCharecters, char result[]);

	Substring("mohammadomarmulla", 8, 2, charecters);

	printf("%s", charecters);

	
	return 0;
}

void Substring(const char string[], int start, int numberOfCharecters, char result[])
{
	int i;
	int j = 0;
	int length = start + numberOfCharecters;

	for (i = start; i < length ; i++)
	{
		if (string[i] == '\0')
			break;
		else
		{
			result[j] = string[i];
			j++;
		}
	}
	result[j] = '\0';
}
