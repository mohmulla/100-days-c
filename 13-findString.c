// program of Function that subtrings charecters
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81];
	char charecters[81];

	int FindString(const char sourceString[], const char toFindString[]);

	
	int c = FindString("one a madhatter was sipping tea one afternoon with smiling cat", "one");
	

	printf("%i", c);

	
	return 0;
}

int FindString(const char sourceString[], const char toFindString[])
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
