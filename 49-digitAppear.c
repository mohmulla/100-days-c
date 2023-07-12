// program that checks if number appears in two given integers
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	bool digitAppear(int i1, int i2);

	printf("%i", digitAppear(13,34));

	return 24;
}

bool digitAppear(int i1, int i2)
{
	int temp1 = i1;
	int temp2 = i2;

	int check1;
	int check2;

	while (temp1 > 0)
	{
		check1 = temp1 % 10;
		temp2 = i2;

		while (temp2 > 0)
		{
			check2 = temp2 % 10;

			if (check1 == check2)
				return true;

			temp2 = temp2 - check2;
			temp2 = temp2 / 10;
		}

		temp1 = temp1 - check1;
		temp1 = temp1 / 10;
	}

	return false;

}
