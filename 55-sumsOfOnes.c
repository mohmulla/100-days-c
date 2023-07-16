// program that sums repeated ones
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int ones(int n);

	printf("%i", ones(9));

	return 0;
}


int ones(int n)
{
	int sum = 0;
	int one = 1;

	for (int i = 0; i < n; i++)
	{
		sum = sum + one;
		one = (one * 10) + 1;
		printf("%i ", one);
	}

	return sum;
}
