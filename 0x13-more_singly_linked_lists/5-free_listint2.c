#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: parameter
 */

void free_listint2(listint_t **head)
{
	listint_t *point;

	if (!*head)
		return;

	while (*head)
	{
		point = (*head)->next;
		free (*head);
		*head = point;
	}
	head = NULL;
}
