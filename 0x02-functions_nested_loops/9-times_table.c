#include <main.h>

/**
 *  times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int a = 0;
	int b, c;

	for (a; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			_putchar(c);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

