#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: as parameter
 * Return: string lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _print_rev_recursion(s + 1));
}
