#include "lists.h"

/**
 * add_node_end - Add a node at the end of a linked list
 * @head: Start of the linked list
 * @str: String to cpy in the last_node node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;    /* Declare a new_node node and last_node */
	unsigned int str_length = 0;

	new_node = malloc(sizeof(list_t));    /* Assign memory to new_node node */
	if (new_node == NULL)                /* Malloc check */
		return (NULL);

	new_node->str = strdup(str);    /* Copy string in struct */

	while (*str)        /* Count string's length */
	{
		str_length++;
		str++;
	}
	new_node->len = str_length;    /* Count the length of string */

	if (*head == NULL)	/* If list is empty*/
	{
		*head = new_node;	/* Set the linked list's address */
		new_node->next = NULL;	/* Set the end of linked list */
		return (new_node);
	}

	last_node = *head;    /* Store the head address in a temp variable */

	while (last_node->next != NULL)    /* Traverse till the last_node*/
		last_node = last_node->next;	/* Get last_node next address variable */

	/* The last node link the new last node address  */
	last_node->next = new_node;
	new_node->next = NULL;		/* Set the end of linked list */

	return (new_node);
}
