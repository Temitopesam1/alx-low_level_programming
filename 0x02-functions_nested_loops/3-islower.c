#include <main.h>
#include <ctype.h>

/**
 * _islower - a function that checks for lowercase character.
 * @c: as a parameter. If it's lowercase print 1 if otherwise return 0
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c) == true)
	{
		return (1);
	}
	else
	{
		return (0);
	}
