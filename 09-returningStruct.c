// program of Function that returns structure
//

#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

int main()
{
	struct date today;

	struct date AddDate(struct date aDate);

	today.day = 1;
	today.month = 1;
	today.year = 2023;

	printf("%i %i %i\n", today.day, today.month, today.year);

	today = AddDate(today);

	printf("%i %i %i\n", today.day, today.month, today.year);

	return 0;
}

struct date AddDate(struct date aDate)
{
	aDate.day++;
	aDate.month++;
	aDate.year++;
	

	return aDate;
}
