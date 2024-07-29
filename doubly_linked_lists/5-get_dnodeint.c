#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Start of the list
 * @index: Number correponding at a node of the list
 *
 * Return: The structure at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index)	/* Advance until you reach the index */
	{
		head = head->next;	/* Advance to the end of the loop */
		count++;
	}

	return (head);
}
