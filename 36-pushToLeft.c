// program that pushes values to left
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int integer[10] = {1,2,3,4,5,6,7,8,9,0};
	

	void pushToLeft(int string[], int length);


	pushToLeft(integer, 10);
	pushToLeft(integer, 10);
	pushToLeft(integer, 10);

	for (int i = 0; i < 10; i++)
		printf("%i ", integer[i]);


	return 0;
}

void pushToLeft(int string[], int length)
{
	int holder = string[0];

	for (int i = 0; i < length; i++)
	{
		string[i] = string[i + 1];
	}
	string[length-1] = holder;
	
	
}
