// program that finds numbers in range
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	void inRange(int i1, int i2);

	inRange(51, 61);

	return 0;
}

void inRange(int i1, int i2)
{
	if (i1 >= 40 && i1 <= 50 && i2 >= 40 && i2 <= 50)
		printf("in reange 40-50\n");
	else if (i1 >= 50 && i1 <= 60 && i2 >= 50 && i2 <= 60)
		printf("in reange 50-60\n");
	else
		printf("out of range\n");
}
