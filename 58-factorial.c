// program that calculates factorail of number
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int factorial(int n);
	
	printf("%i",factorial(9));

	return 0;
}

int factorial(int n)
{
	if (n == 1)
		return 1;
	return n * factorial(n-1);
}
