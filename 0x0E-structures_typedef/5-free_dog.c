#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 *
 * @d: pointer to the structure
 * 
 * Description: Longer description
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	else
		free (d);
}
