// program that finds frequincy of charecter in string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "w3resorces" };
	char c;

	int frequencyOfCharecter(char string[], char charecter);


	printf("enter charecter to find frequancey:");
	scanf("%c", &c);

	printf("frequncy of %c is %i", c, frequencyOfCharecter(string, c));
	
	return 0;
}

int frequencyOfCharecter(char string[], char charecter)
{
	int counter = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == charecter)
		{
			counter++;
		}
	}

	return counter;
}
