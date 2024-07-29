#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Lists to print.
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;    /* Linked list length */

	while (h != NULL)	/* While the head don't reach the end */
	{
		if (h->str == NULL)	/* If string is empty */
			printf("[0] (nil)\n");	/* Hard coded printf */
		else
			printf("[%u] %s\n", h->len, h->str);

		length++;    /* Add 1 at each iteration*/

		h = h->next;	/* Move the head to the next node */
	}

	return (length);
}
