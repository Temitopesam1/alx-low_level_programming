#include "main.h"
#include <string.h>

/**
 *  * _strncpy -  a function that concatenates two strings.
 *   * @src: first parameter.
 *    * @dest: second parameter.
 *     * @n: third parameter.
 *      * Return: 0
 *       */

char *_strncpy(char *dest, char *src, int n)
{
		return (strncpy(dest, src, n));
}
