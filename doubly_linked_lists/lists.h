#ifndef LISTS_H
#define LISTS_H

/* ----------------------LIBRARY--------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>

/* ---------------------STRUCTURE-------------------- */
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* --------------------FUNCTIONS--------------------- */
/* P1T0 */
size_t print_dlistint(const dlistint_t *h);
/* P1T1 */
size_t dlistint_len(const dlistint_t *h);
/* P1T2 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/* P1T3 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/* P1T4 */
void free_dlistint(dlistint_t *head);
/* P1T5 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/* P1T6 */
int sum_dlistint(dlistint_t *head);
/* P1T7 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/* P1T8 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
