#include "main.h"
#include <ctype.h>

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: as a parameter. If it's alphabet print 1 if otherwise return 0
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (isalpha(c) == true)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
