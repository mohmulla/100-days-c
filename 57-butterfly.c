// program that printf varios forms
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	void numbersPyramid(int n);
	void numbersMario(int n);
	

	numbersPyramid(9);
	numbersMario(5);

	return 0;
}

void numbersPyramid(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int space = n; space > i; space--)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf(" %i", i);
		}
		printf("\n");
	}
}

void numbersMario(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%i", i);
		}
		for (int space = n; space > i+1; space--)
		{
			printf(" ");
		}
		for (int space = n; space > i+1; space--)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("%i", i);
		}
		
		printf("\n");

		
	}

	for (int l = n-2; l > -1; l--)
	{
		for(int m = l; m>=0; m--)
		{
			printf("%i", l);
		}
		for (int o = n-1; o > l && o >0; o--)
		{
			printf(" ");
		}
		for (int o = n - 1; o > l && o > 0; o--)
		{
			printf(" ");
		}
		for (int p = l+1; p >0; p--)
		{
			printf("%i", l);
		}
		printf("\n");
	}

}
