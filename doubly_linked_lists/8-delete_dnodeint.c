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
	dlistint_t *delete_node;
	unsigned int cursor = 0;

	if (*head == NULL)	/* If list is empty */
		return (-1);						/* or index is negative */
	delete_node = *head;	/* Copy head's address */
	if (delete_node->next == NULL)	/* If 1 element in the list */
	{
		free(delete_node);
		*head = NULL;
		return (1);
	}
	while (cursor < index  && delete_node != NULL)
	{
		delete_node = delete_node->next;	/* Move to next node */
		cursor++;
	}
	/* idx does not exist || Index out of bound */
	if (delete_node == NULL || index  > cursor)
		return (-1);
	if (delete_node->next == NULL)	/* Delete last element */
	{
		free(delete_node);
		return (1);
	}
	if (delete_node->prev == NULL) /* If we want delete the first node */
	{
		delete_node->next->prev = NULL;
		*head = delete_node->next;
		free(delete_node);
		return (1);
	}
	/* Link the nodes to node between delete node */
	delete_node->prev->next = delete_node->next;
	delete_node->next->prev = delete_node->prev;

	free(delete_node);
	return (1);
}
