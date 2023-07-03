// program that finds the repeatedness charecter in string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "hello beautiful world" };

	void countCharecter(char string[]);

	countCharecter(string);
	
	return 0;
}

void countCharecter(char string[])
{
	int counter = 0;
	char charecter = '0';
	char stack[81] = { " " };
	int j = -1;
	bool foundCharecter = false;

	// stack charecters
	for (int i = 0; string[i] != '\0'; i++)
	{
		for(int ii = 0; stack[ii]!='\0'; ii++)
		{
			if (string[i] != stack[ii])
			{
				foundCharecter = false;
			}
			else
			{
				foundCharecter = true;
				break;
			}
			
		}

		if (foundCharecter == false)
		{
			j++;
			stack[j] = string[i];
		}
		stack[j + 1] = '\0';
	}

	// count charecters
	for (int i = 0; stack[i] != '\0'; i++)
	{
		charecter = stack[i];

		for (int k = 0; string[k] != '\0'; k++)
		{
			if (charecter == string[k])
				counter++;
		}

		printf("%c %i\n", stack[i], counter);
		
		counter = 0;
	}
	
	
}
