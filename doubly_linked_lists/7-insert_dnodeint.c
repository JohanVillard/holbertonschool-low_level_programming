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
	dlistint_t *new_node, *curr, *before;
	unsigned int count = 0;	/* Inde bgin at 0 */

	new_node = add_dnodeint(h, n);

	curr = *h;	/* Take the address of head */

	while (count < idx)
	{
		curr = curr->next;	/* Address to take when loop is over */
		if (curr == NULL)	/* idx does not exist */
			return (NULL);
		count++;
	}

	before = curr->prev;	/* Take the address of the list before new_node */

	new_node->next = curr;	/* Take the address of node at idx */
	curr->prev = new_node;	/* Current node leaves its place  */

	new_node->prev = before;	/* Put new_node 'after' before .... */
	before->next = new_node;

	return (new_node);

}
