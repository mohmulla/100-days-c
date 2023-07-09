// program that find indcies of number that adds up to target
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int integer[10] = {0,1,2,3,4,5,6,7,8,9};
	int target = 15;


	void findTarget(int string[], int length, int target);


	findTarget(integer, 10, target);

	


	return 0;
}

void findTarget(int string[], int length, int target)
{

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (string[i] + string[j] == target)
				printf("%i %i\n", i, j);
		}
	}
	
}
