#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -  a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: accepts an int argument
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int a;
	
	for (a = n; a > 97; a--)
	{
		if (a != 98)
		{
			printf("%d, ", a);
		}
	}
	for (a = n; a < 99; a++)
	{
		if (a != 98)
		{
			printf("%d, ", a);
		}
	}
}
