// program that sums power of x^n+2
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int x = 2;
	int y = 0;

	int polynomial(int x, int power);

	for (int i = 1; i < 9; i = i + 2)
	{
		y = y+ polynomial(x, i);
		printf("%i^%i + ", x, i);
	}

	printf("=%i", y);

	return 0;
}


int polynomial(int x, int power)
{
	if (power == 0)
		return 1;
	else
		return x * polynomial(x, power - 1);
}

