// program that prints floyd trianle
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	void printFloydTriangle(void);

	printFloydTriangle();

	return 0;
}

void printFloydTriangle(void)
{
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (count == 1)
				count = 0;
			else
				count = 1;
			printf("%i", count);
		}
		printf("\n");
	}
}
