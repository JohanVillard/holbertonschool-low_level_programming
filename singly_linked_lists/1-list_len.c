#include "lists.h"

/**
 * list_len - Prints all the elements of a list_t list.
 * @h: Lists to print.
 *
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;    /* Linked list length */

	while (h != NULL)	/* While the head don't reach the end */
	{
		length++;    /* Add 1 at each iteration*/

		h = h->next;	/* Move the head to the next node */
	}

	return (length);
}
