#include "lists.h"

/**
 * print_dlistint - doubly linked list
 * @h: The linked list
 * Return: the number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (counter);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
