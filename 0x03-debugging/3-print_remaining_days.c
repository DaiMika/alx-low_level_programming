#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account 
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaing_days(int month, int year)
{
	if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 == 0)))
	{
		if (month > 2 && day >= 60)
	{
		day++;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaing days: %\dn", 366 - day);
	}
	else
	{
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
	}
}
}
