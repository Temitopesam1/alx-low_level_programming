#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 * dlistint_t linked list.
 * @head: The linked list
 * @index: the index of the node, starting from 0
 * Return: the nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *ptr;

	while (ptr)
	{
		if (counter == index)
			return (ptr);
		counter++;
		ptr = ptr->next;
	}

	return (NULL);
}
