#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  a function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer of failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int a;
	
	ptr1 = ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (a = 0; a <= old_size; a++)
			ptr2[a] = ptr1[a];
	}
	if (old_size > new_size)
	{
		for (a = 0; a <= new_size; a++)
			ptr2[a] = ptr1[a];
	}
	free (ptr);
	return (ptr2);
}
