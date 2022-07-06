#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer.
 *
 * @array: the parameter to take an array as argument
 * @size:  is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return:  the index of the first element for which the cmp
 * function does not return 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
