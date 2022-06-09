#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * followed by a new line.
 * @n: as a parameter
 * Return: always 0 (success).
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		if (a > 1)
		{
			for (b = 1; b < n; b++)
			{
				_putchar(' ');
			}
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
