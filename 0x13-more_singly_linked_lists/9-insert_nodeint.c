#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a
 * given position.
 *
 * @head: This is the first parameter.
 * @n: This is the second parameter.
 * @idx: index to be inserted in.
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *point, *temp;
	unsigned int a;

	point = (listint_t *)malloc(sizeof(listint_t));

	if (point == NULL)
		return (NULL);
	else
	{
		point -> n = n;
		temp = *head;

		for (a = 1; a < idx; a++)
		{
			temp = temp -> next;
			
			if (temp == NULL)
				return (NULL);
		}

		point -> next = temp -> next;
		temp -> next = point;
	}
	return (point);
	free (point);
}
