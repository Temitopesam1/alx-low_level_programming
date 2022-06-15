#include "main.h"
#include <ctype.h>

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @str: first parameter.
 * Return: 0
 */

char *string_toupper(char *str)
{
	int i;

<<<<<<< HEAD
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
=======
   	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
   	}
>>>>>>> 567c778ab44697a7160d3032cf16a16d41440820
	return (str);
}
