#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer pointing to Doubly linked list.
 * @n: Number to store
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));	/* Allocate memory to the new node */
	if (new_node == NULL)	/* Malloc check */
		return (NULL);

	new_node->n = n;	/* Attribute n value */

	temp = *head;	/*  Store the address of last first node */

	new_node->prev = NULL;	/* Put the node at the beginning */
	new_node->next = temp;	/* Link the new node to the last first node */

	if (new_node->next == NULL)
	{
		*head = new_node;    /* Set the new node as the head */
		return (new_node);
	}

	temp->prev = new_node;	/* Put the last first node at second */

	return (new_node);
}
