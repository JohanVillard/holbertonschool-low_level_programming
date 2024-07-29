#include "lists.h"

/**
 * add_node - Create a new_node.
 * @head: Double pointer to head position
 * @str: String to assign at the new_node node
 *
 * Return: The address of the new_node element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;	/* Declare a new_node node */
	list_t *temp = NULL;	/* Temporary head */
	unsigned int str_length = 0;

	new_node = malloc(sizeof(list_t));	/* Assign memory to new_node node */
	if (new_node == NULL)				/* Malloc check */
		return (NULL);

	temp = *head;	/* Store the actual head adress */
	*head = new_node;	/* The head point the new_node node */
	new_node->str = strdup(str);	/* Copy string in struct */

	while (*str)	/* Count string's length */
	{
		str_length++;
		str++;
	}
	new_node->len = str_length;	/* Count the length of string */
	new_node->next = temp;	/* The new_node becomes the first node */

	return (new_node);
}
