#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: The linked list
 * Return: the number of nodes
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (counter);
	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
