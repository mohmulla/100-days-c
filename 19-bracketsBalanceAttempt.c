// program that checks for balanced perantheses
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "[][]" };
	bool isBalanced(char string[]);
	
	
	printf("%i\n", isBalanced(string));
	
	return 0;
}

bool isBalanced(char string[])
{
	char stack[81] = { "                                                                   " };
	int j = -1;
	bool balanced = false;

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == '[')
		{
			j++;
			stack[j] = '[';
		}
		else if (string[i] == ']')
		{
			if (stack[j] == '[')
			{
				balanced = true;
				stack[j] = ' ';
				j--;
			}
			else
				balanced = false;
		}
		
		if (j > -1)
		{
			balanced = false;
		}
	}

	return balanced;

}
