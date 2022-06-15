#include "main.h"
#include <stdio.h>

/**
 * infinite_add -   a function that adds two numbers.
 * @n1: first parameter.
 * @n2: second parameter.
 * @r: third parameter.
 * @size_r: fourth parameter
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a;

	r[size_r];
	a = atoi(n1) + atoi(n2);
	sprintf(char b[], "%d", a);
	if (sizeof(r) < sizeof(b))
	{
		printf("%d", 0);
	}
	else
	{
		strcpy(r, b);
		printf("%s", r);
	}

}
