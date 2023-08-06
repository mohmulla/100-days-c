// program that if array has 3 AND 5
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int aray[10] = { 0,1,2,3,4,3,6,7,8,9 };

	bool contain3and5(int string[], int length);

	printf("%i", contain3or5(aray, 10));

	return 0;
}

bool contain3and5(int string[], int length)
{
	bool contain3 = false;
	bool contain5 = false;
	for (int i = 0; i < length; i++)
	{
		if (string[i] == 3)
			contain3 = true;
		
		if (string[i] == 5)
			contain5 = true;
	}

	if (contain3 && contain5)
		return true;
	else
		return false;
}
