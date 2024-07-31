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
	unsigned int count = 0;	/* Index begin at 0 */

	if (h == NULL)
		return (0);


	if (idx == 0)	/* Take the place 1 */
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	target = *h;	/* Take the address of head */

	while (count < idx)
	{
		target = target->next;	/* Address to take when loop is over */
		if (target == NULL)	/* idx does not exist */
			return (NULL);
		count++;
	}
	if (idx > count)
		return (NULL);
	if (target->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));	/* Allocate memory */
	if (new_node == NULL)	/* Malloc check */
		return (NULL);

	new_node->n = n;	/* Attribute value of n */
	before = target->prev;	/* Take the address of the list before new_node */
	new_node->next = target;	/* Take the address of node at idx */
	target->prev = new_node;	/* targetent node leaves its place  */
	new_node->prev = before;	/* Put new_node 'after' before .... */
	before->next = new_node;
	return (new_node);
}
