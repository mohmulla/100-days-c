// program that finds the longest word in string
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	char charecter;


	bool lowerOrUpper(char charecter);

	printf("enter letter:");

	scanf("%c", &charecter);

	printf("%c ", charecter);

	if (lowerOrUpper(charecter))
		printf("is UpperCase");
	else
		printf("is LowerCase");
	
	return 0;
}

bool lowerOrUpper(char charecter)
{
	if (charecter >= 'a' && charecter <= 'z')
		return 0;
	else if (charecter >= 'A' && charecter <= 'Z')
		return 1;
	
}
