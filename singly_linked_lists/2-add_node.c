#include "lists.h"

/**
 * add_node - Create a new node
 * @head: Double pointer to head position
 * @str: String to assign at the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;	/* Declare a new node */
	list_t *temp;	/* Temporary head */
	unsigned int str_length = 0;

	new = malloc(sizeof(list_t));	/* Assign memory to new node */
	if (new == NULL)				/* Malloc check */
		return (NULL);

	temp = *head;	/* Store the actual head adress */
	*head = new;	/* The head point the new node */
	new->str = strdup(str);	/* Copy string in struct */

	while (*str)	/* Count string's length */
	{
		str_length++;
		str++;
	}
	new->len = str_length;	/* Count the length of string */
	new->next = temp;	/* The new becomes the first node */

	return (new);
}
