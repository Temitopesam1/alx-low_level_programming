#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list.
 * @head: parameter
 * Return: the head node's data (n).
 */

int pop_listint(listint_t **head);
{
	listint_t *point;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	point = (*head)->next;
	free(*head);
	*head = point;

	return (data);
}
