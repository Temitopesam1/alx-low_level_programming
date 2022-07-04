#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to the structure
 * Description: Longer description
 */

void print_dog(struct dog *d)
{
	if (!d)
		d = malloc(sizeof(struct dog));

	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	else if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
