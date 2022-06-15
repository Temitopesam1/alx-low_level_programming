#include "main.h"
#include <ctype.h>

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: parameter
 * Return: 0
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; i <= 256; i++)
	{
		if (i == ' ')
			toupper(i + 1);
		_putchar(str[i]);
	}
}
