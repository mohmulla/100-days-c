// program that find if a number of Length is a palindrome or not
//

#include <stdio.h>
#include <stdbool.h>


int main()
{
	int integer[10] = {0,1,2,3,4,5,6,7,8,9};
	int target = 1551;


	bool numberIsPalindrome(int number,int length);


	printf("\n%i", numberIsPalindrome(target,4));

	


	return 0;
}

int pow(int base, int exp)
{
	if (exp == 0)
		return 1;
	else
		return base * pow(base, exp-1);
}

bool numberIsPalindrome(int number, int length)
{
	int palindromeNumber[10] = { 0 };
	long int shiftedNumber = 0;
	int xnumber = number;

	int pow(int base, int exp);

	//dicect number
	for (int i = 0; i < length; i++)
	{
		palindromeNumber[i] = xnumber % 10;
		xnumber = xnumber / 10;
		printf("%i ", palindromeNumber[i]);
	}
	printf("\n");

	//construct number
	for (int i = 0; i < length; i++)
	{
		shiftedNumber = shiftedNumber * 10;
		shiftedNumber = shiftedNumber + palindromeNumber[i];

		
	}
	printf("shifted Number : %i\n", shiftedNumber);

	if (number == shiftedNumber)
	{
		return true;
	}
	else
		return false;
}
