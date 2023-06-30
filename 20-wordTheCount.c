// program that counts the number the word the appears
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "the string that contains the the the the the thermopolis" };
	
	int TheCount(char string[]);

	printf("the appers %i times\n", TheCount(string));
	
	
	
	return 0;
}

int TheCount(char string[])
{

	int counter = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == 't' && string[i+1] =='h' && string[i+2] == 'e')
		{
			counter++;
		}
	}

	return counter;
}
