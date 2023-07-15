// program that implements several patterns
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	
	void printTriangle(void);
	void printNumberTrianlge(void);
	void printPattern(void);
	void printIncreasedByOne(void);
	void printPyramid(void);
	void printReverseTriangle(void);
	void printRightTrianle(void);
	void printDimond(void);
	void printNumberDimond(void);

	printTriangle();
	printNumberTrianlge();
	printPattern();
	printIncreasedByOne();
	//printPyramid();
	//printReverseTriangle();
	//printRightTrianle();
	printDimond();
	printNumberDimond();


	return 24;
}

void printTriangle(void)
{
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}

void printNumberTrianlge(void)
{
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < i; j++)
		{
			printf("%i", j);
		}
		printf("\n");
	}
	printf("\n");
}

void printPattern(void)
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%i", i);
		}
		printf("\n");
	}
}

void printIncreasedByOne(void)
{
	int number = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%i", number);
			number++;
		}
		printf("\n");
	}
}

void printPyramid(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j >= i; j--)
		{
			printf(" ");
		}
		for (int k = 1; k < i; k++)
		{
			printf("*");
		}
		for (int l = 1; l < i-1; l++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void printReverseTriangle(void)
{
	for (int i = 1; i <= 5; i++)
	{
		
		for (int k = 1; k <= i; k++)
			printf("*");

		printf("\n");
	}
}

void printRightTrianle(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j >= i; j--)
		{
			printf(" ");
		}

		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void printDimond(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j >= i; j--)
		{
			printf("  ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("* ");
		}
		for (int l = 1; l <= i - 1; l++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (int m = 1; m <= 5; m++)
	{
		for (int n = 1; n <= m+1; n++)
		{
			printf("  ");
		}
		for (int o = 4; o >= m; o--)
		{
			printf("* ");
		}
		for (int p = 3; p >= m; p--)
		{
			printf("* ");
		}

		printf("\n");
	}
}

void printNumberDimond(void)
{

	int k,o,p,n;

	for (int i = 1; i <= 5; i++)
	{
		int count = 1;
		for (int j = 5; j >= i; j--)
		{
			printf("  ");
		}
		for ( k = 1; k <= i; k++)
		{
			printf("%i ",k);
		}
		count = k-1;
		for ( int l = 1; l <= i - 1; l++)
		{
			count -= 1;
			
			printf("%i ",count);
			//count--;
		}
		printf("\n");
	}

	for (int m = 1; m <= 5; m++)
	{
		for ( n = 1; n <= m + 1; n++)
		{
			printf("  ");
		}
		int count = 1;
		for ( o = 4; o >= m; o--)
		{
			printf("%i ",count);
			count++;
		}
		int secondCount = 3;
		for ( p = 3; p >= m; p--)
		{
			secondCount = p-m+1;
			printf("%i ",secondCount);
			secondCount--;
		}

		printf("\n");
	}
}
