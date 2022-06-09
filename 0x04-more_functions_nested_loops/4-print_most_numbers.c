#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line. Do not print 2 and 4
 *
 * Return: always 0 (success).
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 2 && i == 4)
			continue;
		_putchar(i);
		_putchar(\n);
	}
}