#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at the beginning of a
 * listint_t list.
 *
 * @head: This is the first parameter.
 * @n: This is the second parameter.
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *point;

	point = (listint_t *)malloc(sizeof(listint_t));

	if (point == NULL)
		return (NULL);

	point->n = n;
	point->next = *head;
	*head = point;

	return (point);
	free(point);
}
