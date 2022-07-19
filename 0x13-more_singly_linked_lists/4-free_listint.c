#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: parameter
 */

void free_listint(listint_t *head)
{
	listint_t *point;
	
	while (head)
	{
		point = head->next;
		free (head);
		head = point;
	}
}
