// program that finds if brackets are balanced
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "[[](){}]" };
	bool isBreacketBalanced(char string[]);

	printf("%i", isBreacketBalanced(string));
	

//	printf("%s",string);


	return 0;
}

bool charecterExist(char charecter, char string[])
{
	bool charecterIsThere;

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (charecter == string[i])
		{
			charecterIsThere = true;
		}
		else
			charecterIsThere = false;
	}
	return charecterIsThere;
}

bool isBreacketBalanced(char string[])
{
	char stack[20];
	int stacker = -1;
	bool balanced = false;

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == '[' || string[i] == '(' || string[i]=='{')
		{
			stacker++;
			stack[stacker] = string[i];
			balanced = false;
		}
		else if (string[i] == ']')
		{
			if (stacker > -1)
			{
				if (stack[stacker] == '[')
				{
					stack[stacker] = ' ';
					stacker--;
					balanced = true;
				}
				else
					balanced = false;
			}
			else
				balanced = false;
		}
		else if (string[i] == ')')
		{
			if (stacker > -1)
			{
				if (stack[stacker] == '(')
				{
					stack[stacker] = ' ';
					stacker--;
					balanced = true;
				}
				else
					balanced = false;
			}
			else
				balanced = false;
		}
		else if (string[i] == '}')
		{
			if (stacker > -1)
			{
				if (stack[stacker] == '{')
				{
					stack[stacker] = ' ';
					stacker--;
					balanced = true;
				}
				else
					balanced = false;
			}
			else
				balanced = false;
		}

		if (stacker != -1)
			balanced = false;
	}

	return balanced;
}
