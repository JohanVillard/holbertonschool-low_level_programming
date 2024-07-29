#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Start of the list
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: Integer to attribute to n of the structure
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr, *after;
	unsigned int count = 1;	/* Begin at one otherwise offset */

	new_node = add_dnodeint(h, n);
	if (new_node == NULL)	/* Malloc check */
		return (NULL);

	curr = *h;	/* Take the address of head */

	while (count < idx)
	{
		curr = curr->next;	/* Address to take when loop is over */
		count++;
		if (curr == NULL)	/* idx does not exist */
			return (NULL);
	}


	after = curr->next;	/* Take the address of the list after new_node */

	new_node->prev = curr;	/* Take the address of node at idx */
	curr->next = new_node;	/* Current node leaves its place  */

	new_node->next = after;	/* Put new_node before 'after'.... */
	after->prev = new_node;

	return (new_node);

}
