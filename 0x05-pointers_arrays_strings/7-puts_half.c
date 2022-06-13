#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * @str: as first parameter
 */

void puts_half(char *str)
{
	char a;
	int b = strlen(str) / 2;

	if (strlen(str) % 2 == 0)
	{
		for (a = b; a < strlen(str); a++)
		{
			_putchar(a);
		}
	}
	else
	{
		b = (strlen(str) - 1) / 2;
		for (a = b; a < strlen(str); a++)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
