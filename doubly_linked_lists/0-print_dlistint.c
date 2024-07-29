#include "lists.h"

/**
 * print_dlistint - Print a doubly linked list.
 * @h: Doubly linked list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_count++;
	}

	return (nodes_count);
}
