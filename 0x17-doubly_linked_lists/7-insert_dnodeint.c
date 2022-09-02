#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position.
 * @h: The linked list
 * @idx: the specified index
 * @n: the node element
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr2, *ptr = malloc(sizeof(dlistint_t));
	unsigned int counter = 0;

	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;

	if (!*h)
		*h = ptr;
	else
	{
		ptr2 = *h;
		while (ptr2)
		{
			if (counter == idx)
			{
				ptr->prev = ptr2->prev;
				ptr->next = ptr2;
				ptr2->prev->next = ptr;
				ptr2->prev = ptr;
				return (*h);
			}
			counter++;
			ptr2 = ptr2->next;
		}
	}
	return (NULL);
}
