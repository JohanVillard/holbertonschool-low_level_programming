#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);

	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 7);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 6);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 4);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 3);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 2);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 1);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 1);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 2);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	return (0);
}
