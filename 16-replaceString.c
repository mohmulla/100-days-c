// program of Function that replaces string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "hello beautiful world" };
	char s1[81] = { "beautiful " };
	char s2[81] = { "wounderful " };

	void ReplaceString(char sourceString[], char stringToBeReplaced[], char replacementString[]) ;
	

	ReplaceString(string, s1, s2);

	printf("%s\n", string);



	
	return 0;
}

void ReplaceString(char sourceString[], char stringToBeReplaced[], char replacementString[])
{
	int FindString( char sourceString[],  char toFindString[]);
	int CountString(char string[]);
	void RemoveString(char string[], int indexOfRemoval, int numberOfCharectersToBeRemoved);
	void InsertString(char sourceString[], char stringToBeInserted[], int locationOfInsersion);

	// find string and hold its index
	int indexOfToBeRemoved = FindString(sourceString, stringToBeReplaced);
	//printf("%i\n", indexOfToBeRemoved);

	// find string length and hold its length
	int LengthOfToBeRemoved = CountString(stringToBeReplaced);
	//printf("%i\n", LengthOfToBeRemoved);

	// call string remove
	RemoveString(sourceString, indexOfToBeRemoved, LengthOfToBeRemoved);
	//printf("%s\n", sourceString);

	// call string insert
	InsertString(sourceString, replacementString, indexOfToBeRemoved);
}

int CountString(char string[])
{
	int count = 0;

	for (int i = 0; string[i] != '\0'; i++)
		count++;

	return count;
}

int FindString( char sourceString[],  char toFindString[])
{
	bool isMatching = false;
	int j;

	// itertate over each charecter
	for (int i = 0; sourceString[i] != '\0'; i++)
	{
		j = 0;
		isMatching = false;

		while (toFindString[j] != '\0')
		{
			if (toFindString[j] == sourceString[i + j])
			{
				isMatching = true;
			}
			else
			{
				isMatching = false;
				break;
			}

			j++;
		}

		if (isMatching && toFindString[j] == '\0')
			return i;

	}

	return -1;

	// if found ? iterate over each subesqent charecter
	// if equal ? retuen index
	// else ? return -1
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
	printf("%s\n", string);

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != '-')
		{
			string[j] = string[i];
			j++;
		}
	}

	string[j] = '\0';
	printf("%s\n", string);
}

void InsertString(char sourceString[],  char stringToBeInserted[], int locationOfInsersion)
{
	// copy string
	// locate place to be inserted
	// insert String at location
	// continue 

	int i;
	int j = 0;
	int k = 0;

	char copiedString[81];

	for ( i = 0; sourceString[i] != '\0'; i++)
	{
		copiedString[i] = sourceString[i];
	}
	copiedString[i] = '\0';

	for ( i = 0; i < locationOfInsersion; i++)
	{
		sourceString[i] = copiedString[i];
	}

	for ( j = 0; stringToBeInserted[j] != '\0'; j++)
	{
		sourceString[j+locationOfInsersion] = stringToBeInserted[j];
		
	}

	for (k = locationOfInsersion; copiedString[k] != '\0'; k++)
	{
		
		sourceString[ j + k] = copiedString[k];
	}
	
	sourceString[j + k] = '\0';

}
