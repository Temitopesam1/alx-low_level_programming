#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator -  a function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: the parameter to take an array as argument
 * @size: this is the size of the argument of the first parameter
 * @action: this is the function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
		action(array[a]);
}
