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
	dlistint_t *new_node, *target, *before;
	unsigned int count = 0;	/* idx begin at 0 */

	if (h == NULL)
		return (NULL);

	if (idx == 0)	/* Take the place 1 = idx 0 */
	{
		new_node = add_dnodeint(h, n);	/* Function creates a node at the beginning */
		return (new_node);
	}

	target = *h;	/* Copy the address of head */

	while (count < idx)
	{
		target = target->next;	/* Address at idx when loop is over */
		if (target == NULL)	/* idx does not exist */
			return (NULL);
		count++;
	}
	if (idx > count)	/* Check if idx is out of bound */
		return (NULL);
	if (target->next == NULL)	/* If idx is on last node */
		return (add_dnodeint_end(h, n)); /* Create a node at the end */

	new_node = malloc(sizeof(dlistint_t));	/* Allocate memory */
	if (new_node == NULL)	/* Malloc check */
		return (NULL);

	new_node->n = n;	/* Attribute value of n */
	before = target->prev;	/* Identify the node before the idx */
	new_node->next = target;	/* Put new_node before the node target at idx */
	target->prev = new_node;
	new_node->prev = before;	/* Put new_node after the node before */
	before->next = new_node;
	return (new_node);
}
