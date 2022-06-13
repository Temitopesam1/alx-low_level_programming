#include "main.h"
#include <string.h>

/**
 * print_array -  a function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: as first parameter
 * @n: as second parameter
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		_putchar(a[b]);

		if (b != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
