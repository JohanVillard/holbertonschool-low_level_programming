#include "lists.h"

/**
 * free_list - Free all nodes
 * @head: Linked list'head
 */
void free_list(list_t *head)
{
	list_t *free_node; /* Node that erase memory */

	while (head != NULL)
	{
		free_node = head;		/* Copy the address of head */
		head = head->next;		/* Move head to next list */
		free(free_node->str);	/* Free string */
		free(free_node);		/* Then free node */
	}
}
