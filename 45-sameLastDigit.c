// program that checks equality of last digit
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	bool sameLastDigit(int i1, int i2);

	printf("%i", sameLastDigit(198, 27));

	return 0;
}

bool sameLastDigit(int i1, int i2)
{
	return(i1 % 10 == i2 % 10);
}
