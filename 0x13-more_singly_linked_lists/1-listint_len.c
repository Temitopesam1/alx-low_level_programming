#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: This is the first variable.
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int counter = 0;

	temp = h;
	while (temp != 0)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}
