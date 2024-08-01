#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 * @head: Start of the list
 * @index: Index of of the list
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *next_curr, *prev_curr;
	unsigned int cursor = 0;

	if (*head == NULL)	/* If list is empty */
		return (-1);
	curr = *head;	/* Copy head's address */
	if (curr->next == NULL)	/* If 1 element in the list */
	{
		free(curr);
		*head = NULL;
		return (1);
	}
	while (cursor < index)
	{
		curr = curr->next;	/* Move to next node */
		cursor++;
	}
	if (index > cursor)	/* Index out of bound */
		return (-1);
	prev_curr = curr->prev;		/* Set the node address before the deleted node */
	if (curr->next == NULL)	/* Delete last element */
	{
		prev_curr->next = NULL;	/* Set this node as last element */
		free(curr);
		return (1);
	}
	next_curr = curr->next;	/* Set the node address after the deleted node */
	if (index > 0)
	{
		/* Link the node to node after delete node */
		prev_curr->next = next_curr;
		next_curr->prev = prev_curr;
	}
	else	/* If we want to delete first node */
	{
		next_curr->prev = NULL;
		*head = next_curr;
	}
	free(curr);
	return (1);
}
