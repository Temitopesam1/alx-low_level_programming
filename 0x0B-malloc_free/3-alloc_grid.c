#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * alloc_grid -  a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: NULL or pointer to the array.
 */

int **alloc_grid(int width, int height)
{
	int **ptr, a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		ptr[a] = (int *) malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			free(ptr);
			for (b = 0; b < a; b++)
				free(ptr[b]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (ptr);
}

