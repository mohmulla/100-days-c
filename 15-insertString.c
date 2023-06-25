// program of Function that inserts string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "hello world" };

	void InsertString(char sourceString[], const char stringToBeInserted[], int locationOfInsersion);

	InsertString(string, "beautiful ", 6);


	printf("%s", string);

	
	return 0;
}

void InsertString(char sourceString[], const char stringToBeInserted[], int locationOfInsersion)
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
	printf("copied: %s\n", copiedString);

	for ( i = 0; i < locationOfInsersion; i++)
	{
		sourceString[i] = copiedString[i];
	}
	printf("s1: %s\n", sourceString);

	for ( j = 0; stringToBeInserted[j] != '\0'; j++)
	{
		sourceString[j+locationOfInsersion] = stringToBeInserted[j];
		
	}
	printf("s2: %s\n", sourceString);

	for (k = locationOfInsersion; copiedString[k] != '\0'; k++)
	{
		//printf("c2: %c\n", copiedString[k]);
		sourceString[ j + k] = copiedString[k];
	}
	
	sourceString[i + j + k] = 'A';
	sourceString[80] = '\0';



}
