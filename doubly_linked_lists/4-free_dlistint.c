#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Start of the list.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node;

	while (head != NULL)	/* Run the doubly linked list */
	{
		free_node = head;	/* Copy address to delete */
		head = head->next;	/* Move head to next node */
		free(free_node);	/* Delete node */
	}

}
