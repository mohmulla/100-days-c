// program that practices loops
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	void upToNCubed(int n); 
	void multiplicationTable(int n);
	void expressedInPrimes(int number);

	//upToNCubed(9);
	//multiplicationTable(13);
	expressedInPrimes(96);

	return 0;
}


int cube(int x)
{
	return x * x * x;
}

void upToNCubed(int n)
{
	int cube(int x);

	for (int i = 0; i <= n; i++)
	{
		int y = cube(i);
		printf("%i\n", y);
	}
}

void multiplicationTable(int n)
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j<=n; j++)
		{
			printf("%i x %2i = %3i\n", i, j, i * j);
		}
	}
}

bool isPrime(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}

void expressedInPrimes(int number)
{
	bool isPrime(int number);

	for (int i = 1; i < number; i++)
	{
		for (int j = 1; j < number; j++)
		{
			if (isPrime(i) && isPrime(j) && j + i == number)
				printf("%i + %i = %i\n", i, j, number);
		}
	}
}
