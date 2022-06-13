#include "main.h"
#include <string.h>
/**
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: as first parameter
 * Return: the string in reverse and append newline.
 */

void print_rev(char *s)
{
	char rev[1000];
    	int i, j, count = 0;
	
    	while (s[count] != '\0')
    	{
        	count++;
    	}
    	j = count - 1;

    	for (i = 0; i < count; i++)
    	{
        	rev[i] = s[j];
        	j--;
    	}
	_putchar(rev);
	_putchar('\');
}
