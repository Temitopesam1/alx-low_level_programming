#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: This is the first variable.
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int counter = 0;

	temp = h;
	while (temp != 0)
	{
		printf("%d\n", temp -> n);
		temp = temp -> next;
		counter++;
	}
	return (counter);
}
