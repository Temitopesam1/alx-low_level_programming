#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 * linked list.
 *
 * @head: This is the first parameter.
 * @index: This is second parameter
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int a;

	temp = head;
	
	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
