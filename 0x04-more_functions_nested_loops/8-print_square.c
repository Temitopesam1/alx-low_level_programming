#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * followed by a new line.
 * @size: as a parameter
 * Return: always 0 (success).
 */

void print_square(int size)
{
	int a, b;

	for (b = 0; b > size; b++)
	{
		for (a = 1; a <= size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
