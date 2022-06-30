#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of array element.
 * @size: element type size.
 * Return: pointer of failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int a;
	
	if ( nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a <= 98; a++)
		ptr[a] = 0;
	return (ptr);
}
