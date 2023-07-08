// program that returns true if values of 30 
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int integer1 = 18;
	int integer2 = 31;

	bool isThirty(int value1, int value2);


	printf("%i", isThirty(integer1, integer2));


	return 0;
}

bool isThirty(int value1, int value2)
{
	if (value1 + value2 == 30)
		return true;
	else if (value1 == 30 || value2 == 30)
		return true;
	else
		return false;
}
