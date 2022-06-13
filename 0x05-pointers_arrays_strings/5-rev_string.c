#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 *
 * @s: as first parameter
 * Return: the string in reverse.
 */

void rev_string(char *s)
{
	int a, b;

	a = strlen(s);
	for (b = a; b >= 0; b--)
	{
		if (s[b] != '\0')
			return (0);
	}
}
