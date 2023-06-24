// program of Function that removes from string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "hello beautiful world" };

	void RemoveString(char string[], int indexOfRemoval, int numberOfCharectersToBeRemoved);

	
	RemoveString(string, 5, 10);

	printf("%s", string);

	
	return 0;
}

void RemoveString(char string[], int indexOfRemoval, int numberOfCharectersToBeRemoved)
{
	// start at index of removal
	// replace charecters in string with '-'
	// assign charecters with skip to '-'
	// terminate string with '\0'

	int indexOfCharectersToBeRemoved = indexOfRemoval + numberOfCharectersToBeRemoved;
	int j = 0;

	for (int i = indexOfRemoval; i < indexOfCharectersToBeRemoved; i++)
	{
		if (string[i] != '\0')
		{
			string[i] = '-';
		}
	}

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != '-')
		{
			string[j] = string[i];
			j++;
		}
	}

	string[j] = '\0';
}
