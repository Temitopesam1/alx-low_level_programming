#include "lists.h"

/**
 * add_dnodeint -  a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: The linked list
 * @n: node element
 * Return: the address of the new element, or NULL if it failed
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

		ptr->next = ptr2;
		ptr->prev = NULL;
		ptr2->prev = ptr;
		*head = ptr;
	}
	return (*head);
}
