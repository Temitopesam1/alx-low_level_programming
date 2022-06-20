#include "main.h"
#include <string.h>

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 *
 * @s: This is the C string to be scanned
 * @accept: This is the character to be searched in str.
 * Return: This function returns the number of characters
 */

char *_strpbrk(char *s, char *accept)
{
<<<<<<< HEAD
	return (strpbrk(s, accept));
=======
	return (strbrk(s, accept));
>>>>>>> 8f2229888b1113fcca06296cc0afb2454d3e7fa6
}
