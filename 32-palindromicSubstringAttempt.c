// program that finds if brackets are balanced
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "fabbbbcbag" };
	void palindromic(char string[]);

	palindromic(string);
	

//	printf("%s",string);


	return 0;
}

int stringLength(char string[])
{
	int count = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}

void palindromic(char string[])
{
	char palindrome[81];
	int start = 0;
	int end=0;
	// iterate over each charecter in string
	// go outward to nearby charecters <-___->
	// if outward is equal go to next


	for (int i = 0; string[i] != '\0'; i++)
	{
		start = i;
		end = i;

		for (int j = 0; j< stringLength(string)/2;j++)
		{	
			if (string[i] == string[i + 1])
			{
				end = i + 1;
			}
			start--;
			end++;

			if (string[start] == string[end] && end - start > 0)
			{
				palindrome[start] = string[start];
				palindrome[end] = string[end];
			}
				
			
		}
		//printf("\n");
		
	}
	printf("%i\n", stringLength(string));
	printf("%s\n", palindrome);
}
