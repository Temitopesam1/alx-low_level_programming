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
	int a;

	a = strlen(name);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = malloc(a + 1);

	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(strlen(owner) + 1);

	if (!d->owner)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);

	free(d);
	return (d);
}
