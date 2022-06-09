#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: as a parameter
 * Return: always 0 (success).
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
