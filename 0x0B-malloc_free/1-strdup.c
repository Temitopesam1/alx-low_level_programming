#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: string to be copied
 * Return: NULL or pointer to the array.
 */

char *_strdup(char *str)
{
	int a;
	char *b;

	if (str == NULL)
		return (NULL);

	a = strlen(str);
	b = malloc(sizeof(char) * a - 13);
	if (b == NULL)
		return (NULL);
	b = strdup(str);

	return (b);
}


