#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a doubly linked list.
 * @h: Doubly linked list.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_count = 0;

	while (h != 0)
	{
		h = h->next;
		nodes_count++;
	}

	return (nodes_count);
}
