#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: the array
 * @height: the height
 * Return: NULL or pointer to the array.
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
