#include "main.h"
#include <stdio.h>
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
	
	//finding the length of the string
    	while (s[count] != '\0')
    	{
        	count++;
    	}
    	j = count - 1;

  	//reversing the string by swapping
    	for (i = 0; i < count; i++)
    	{
        	rev[i] = s[j];
        	j--;
    	}
	puts(rev);
}
