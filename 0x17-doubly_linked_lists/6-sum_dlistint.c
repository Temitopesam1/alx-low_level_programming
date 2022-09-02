#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: The linked list
 * Return: the sum or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (!ptr)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
