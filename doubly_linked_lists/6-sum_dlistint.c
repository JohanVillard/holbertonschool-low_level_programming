#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Start of he list
 *
 * Return: The sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}



	return (sum);
}
