#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of byte
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, c, d = 0;

	a = strlen(s1);
	b = strlen(s2);

	if (b <= n)
		ptr = malloc((a + b + 1) * sizeof(char));
	else
		ptr = malloc((a + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	if (b <= n)
	{
		for (c = 0; c <= a; c++)
			ptr[c] = s1[c];
		for (c = a; c <= (a + b); c++)
		{
			ptr[c] = s2[d];
			d++;
		}
	}
	else
	{
		for (c = 0; c <= a; c++)
			ptr[c] = s1[c];
		for (c = a; c < (a + n); c++)
		{
			ptr[c] = s2[d];
			d++;
		}
	}
	ptr[c] = '\0';
	return (ptr);
}
