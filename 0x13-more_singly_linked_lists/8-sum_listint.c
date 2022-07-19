#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: This is the first variable.
 * Return: the sum of node values or 0 if NULL.
 */

int sum_listint(listint_t *head)
{
	int counter = 0;

	while (head != 0)
	{
		counter += head -> n;
		head = head -> next;
	}
	return (counter);
}
