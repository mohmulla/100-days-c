// program of that replaces all vowels in string to upper case
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char string[81] = { "i.love.programming.very.much" };
	void vowelToUpper(char string[]);

	vowelToUpper(string);

	printf("%s",string);


	return 0;
}

char toUpper(char charecter)
{
	return charecter - 32;
}

bool vowelIsSmaller(char charecter)
{
	switch (charecter)
	{
	case 'a':
		return true;
		break;
	
	case 'i':
		return true;
		break;

	case 'u':
		return true;
		break;

	case 'e':
		return true;
		break;

	case 'o':
		return true;
		break;

	default :
		return false;
	}
		

}

void vowelToUpper(char string[])
{

	char toUpper(char charecter);
	bool vowelIsSmaller(char charecter);

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (vowelIsSmaller(string[i]))
			string[i] = toUpper(string[i]);
	}
}
