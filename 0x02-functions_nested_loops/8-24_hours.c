#include <main.h>

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; 1++)
	{
		for (b = 0; b > 60; b++)
		{
			if (a > b)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
				_putchar(':');
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
				_putchar('\n');
			}
		}
	}
}

