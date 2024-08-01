#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Start of the list.
 * @n: Integer to be stored.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));    /* Memory allocation */
	if (new_node == NULL)    /* Malloc check */
		return (NULL);

	new_node->n = n;    /* Attribute parameter n */

	new_node->next = NULL;    /* Set the tail of list */

	last_node = *head;    /* Get head address */

	if (*head == NULL)    /* No node */
	{
		new_node->prev = NULL;    /* Set the start of list */
		new_node->next = NULL;    /* Set the end of list */
		*head = new_node;    /* Set the head of list */
		return (new_node);
	}

	while (last_node->next != NULL)    /* Go through the list */
		last_node = last_node->next;    /* Get the address of last node */

	/* Set the prev address of new_node from last node */
	new_node->prev = last_node;

	/* Set the next address of last node from new_node */
	last_node->next = new_node;

	return (new_node);
}
