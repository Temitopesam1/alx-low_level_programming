#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of
 * a dlistint_t list.
 * @head: the linked list
 * @n: node element
 * Return: the address of the new element, or NULL if it failed
 */



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;

	if (!*head)
		*head = ptr;
	else
	{
		dlistint_t *ptr2 = *head;

		while (ptr2->next)
			ptr2 = ptr2->next;

		ptr2->next = ptr;
		ptr->prev = ptr2;

	}
	return (*head);
}
