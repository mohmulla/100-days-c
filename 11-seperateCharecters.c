// program of Function that seperates charecters
//

#include <stdio.h>



int main()
{
	char string[81];
	char charecters[81];

	void TakeString(char string[], int stringLength);
	void PrintCharecters(char charecters[], int charectersLength);

	TakeString(string, 81);
	PrintCharecters(string, 81);

	return 0;
}

void TakeString(char string[], int stringLength)
{
	char charecter;
	int i = 0;

	do
	{
		charecter = getchar();
		string[i] = charecter;
		i++;
	} 
	while (i < stringLength  && charecter != '\n');

	string[i - 1] = '\0';
}

void PrintCharecters(char charecters[], int charectersLength)
{
	for (int i = 0; i < charectersLength; i++)
	{
		if ( (charecters[i] >= 'a' && charecters[i] <= 'z')  || (charecters[i] >= 'A' && charecters[i] <= 'Z'))
			printf("%c ", charecters[i]);
	}
}
