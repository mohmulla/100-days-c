// program of Function that concats and displays string
//

#include <stdio.h>



int main()
{
	int string1Length = 5;
	int string2Length = 5;
	int string3Length = 10;

	char string1[5] = { 't', 'e', 's', 't', ' '};
	char string2[5] = { 'w', 'o', 'r', 'k', 's' };
	char string3[10];

	void DisplayString(char array[], int arrayLength);
	void Concat(char concatedText[], char text1[], int text1Length, char text2[], int text2Length);


	DisplayString(string1, string1Length);
	DisplayString(string2, string2Length);

	Concat(string3, string1, string1Length, string2, string2Length);

	DisplayString(string3, string3Length);


	return 0;
}

void DisplayString(char array[], int arrayLength)
{
	for (int i = 0; i < arrayLength; i++)
		printf("%c", array[i]);

	printf("\n");
}

void Concat(char concatedText[], char text1[], int text1Length, char text2[], int text2Length)
{
	for (int i = 0; i < text1Length; i++)
		concatedText[i] = text1[i];

	for (int j = 0; j < text2Length; j++)
		concatedText[j + text1Length] = text2[j];
}
