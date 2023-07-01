// program of palindrome 
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "aaabbaaa " };
	void palindrome(char string[]);

	palindrome(string);
	
	
	
	
	return 0;
}

void palindrome(char string[])
{
	char stack[81];
	int j = -1;
	int counter = 0;
	int index = 0;

	int pal = 0;

	for (int i = 0; string[i] != ' '; i++)
	{
		counter++;

		j++;
		stack[j] = string[i];
	}
	
	for (int i = 0; i <= counter / 2; i++)
	{
		if (stack[i] == stack[counter - i])
		{
			pal = 1;
		}
		else
			pal = 0;
	}

	printf("%i\n", pal);

}
