#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 *
 * @d: pointer to the structure
 *
 * Return: NULL
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d);
}
