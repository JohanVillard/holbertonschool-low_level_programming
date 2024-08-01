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
	dlistint_t *new_node, *curr_node;
	unsigned int cursor = 0;	/* idx begin at 0 */

	if (*h == NULL)
		return (NULL);

	if (idx == 0)	/* Take the place 1 = idx 0 */
		return (add_dnodeint(h, n));	/* Function creates a node at the beginning */

	curr_node = *h;	/* Copy the address of head */

	while (cursor < idx - 1 && curr_node != NULL)
	{
		curr_node = curr_node->next;	/* Address at idx when loop is over */
		cursor++;
	}
	if (curr_node == NULL)	/* idx does not exist */
		return (NULL);
	if (idx - 1 > cursor)	/* Check if idx is out of bound */
		return (NULL);
	if (curr_node->next == NULL)	/* If idx is on last node */
		return (add_dnodeint_end(h, n)); /* Create a node at the end */

	new_node = malloc(sizeof(dlistint_t));	/* Allocate memory */
	if (new_node == NULL)	/* Malloc check */
		return (NULL);

	new_node->n = n;	/* Attribute value of n */
	new_node->prev = curr_node;	/* Put new_node after the node curr_node at idx */
	new_node->next = curr_node->next;	/* Link new_node t next node at idx */
	curr_node->next = new_node;
	curr_node->next->prev = new_node;	/* Link new_node t next node at idx */

	return (new_node);
}
