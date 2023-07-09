// program that returns true if there are 3 increasing adjecents
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int integer[10] = {5,5,5,1,0,3,5,0,5,0};
	

	bool increasingAdjesents(int string[], int length);


	printf("%i", increasingAdjesents(integer,10) );


	return 0;
}

bool increasingAdjesents(int string[], int length)
{
	

	for (int i = 0; i < length; i++)
	{
		if (string[i+1] - string[i] == 1 && string[i+2] - string[i] == 2)
			return true;
		
	}
	return false;
	
}
