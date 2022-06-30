#include "main.h"
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers.
 * @min: minimum array lenght
 * @max: maximum array lenght
 * Return: pointer of failure
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a;
	
	if ( min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(ptr));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; ((max - min) + 1); a++)
	{
		ptr[a] = min;
		min++;
	}
	return (ptr);
}
