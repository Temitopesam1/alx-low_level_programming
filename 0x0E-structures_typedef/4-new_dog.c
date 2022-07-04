#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog -  a function that creates a new dog.
 *
 * @name: pointer to the structure
 * @age: parameter
 * @owner: parameter
 *
 * Return: pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
	free(d);
}
