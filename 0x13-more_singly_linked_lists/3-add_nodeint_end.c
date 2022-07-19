#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a
 * listint_t list.
 *
 * @head: This is the first parameter.
 * @n: This is the second parameter.
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *point, *temp;

	point = (listint_t *)malloc(sizeof(listint_t));

	if (point == NULL)
		return (NULL);

	point->n = n;
	if (*head == NULL)
	{
		point->next = NULL;
		*head = point;
	}
	else
	{
		temp = *head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = point;
		point->next = NULL;
	}

	return (point);
	free(point);
}
