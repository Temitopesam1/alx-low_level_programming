#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: the specific character.
 * Return: NULL or pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *) malloc(size * sizeof(char));
		if (ptr == 0)
		{
			return (NULL);
		}
		else
		{
			for (a = 0; a < size; a++)
			{
				ptr[a] = c;
			}
		}
	}
	return (ptr);
}
