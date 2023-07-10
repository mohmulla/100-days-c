// program that finds the longest common prefex
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string1[10] = { "floor" };
	char string2[10] = { "find" };
	char string3[10] = { "flower" };

	void findLongestPrefex(char string1[], char string2[], char string3[]);

	findLongestPrefex(string1, string2, string3);

	return 0;
}

void findLongestPrefex(char string1[], char string2[], char string3[])
{
	char prefex[10];

	for (int i = 0; string1[i] != '\0'; i++)
	{
		if (string1[i] == string2[i] && string1[i] == string2[i])
			prefex[i] = string1[i];
		else
		{
			prefex[i] = '\0';
			break;
		}
	}
	printf("%s", prefex);
}
