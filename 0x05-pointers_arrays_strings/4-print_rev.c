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
	 // declare static variable  
    	static int i, len, temp;
    
	len = strlen(s); // use strlen() to get the length of str string

    	if (i < len/2)
	{  
        	// temp variable use to temporary hold the string  
        	temp = s[i];  
       	 	s[i] = s[len - i - 1];  
        	s[len - i - 1] = temp;  
        	i++;
		puts(s);
		revstr(s); // recusively calls the revstr() function  
    	}
}
