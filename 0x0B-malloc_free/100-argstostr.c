#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: first parameter
 * @av: second parameter
 * Return: NULL or pointer to the array.
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *str;

	if (av == NULL || ac == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			c++;
		c++;
	}
	str = malloc(sizeof(char) * c + 1);
	if (str == NULL)
		return (NULL);
	d = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[d] = av[a][b];
			d++;
		}
		str[d] = '\n';
		d++;
	}
	return (str);
}
