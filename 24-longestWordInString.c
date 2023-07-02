// program that finds the longest word in string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "the longest word in stringerst and longestwords afters" };
	char c;

	void longestWordInString(char string[]);


	

	longestWordInString(string);
	
	return 0;
}

int StringLength(char string[])
{
	int counter = 0;
	for (int i = 0; string[i] != '\0'; i++)
		counter++;

	return counter;
}

void longestWordInString(char string[])
{
	char wordMax[20] = { " " };
	char wordToCompare[20] = { " " };

	int StringLength(char string[]);

	int i = 0;
	int j = 0;
	int k = 0;

	// we iterate over each word
	// we record first word
	// we record next word
	// we compare the words
	// if word is greater we copy word into max

	for ( i = 0; string[i] != ' '; i++)
		wordMax[i] = string[i];

	wordMax[i] = '\0';
	

	i++;

	while(string[i] !='\0')
	{
		for (i = i; string[i] != ' ' && string[i]!='\0'; i++)
		{
			wordToCompare[j] = string[i];
			j++;
		}
		wordToCompare[j] = '\0';


		if (StringLength(wordMax) < StringLength(wordToCompare))
		{
			for (k = 0; wordToCompare[k] != '\0'; k++)
			{
				wordMax[k] = wordToCompare[k];
			}
			wordMax[k] = '\0';
		}
		

		j = 0;
		k = 0;
		i++;
		
	}
	
	printf("the longest word is: %s\n", wordMax);
	
}
