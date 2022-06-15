#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: first parameter.
 * Return: 0
 */

void print_number(int n)
{
	char a[256];

	sprintf(a, "%d", n);
	_putchar(a);
}
