#ifndef LISTS_H
#define LISTS_H

/* --------------------------------Library------------------------------ */
#include<stdlib.h>
#include<stdio.h>
#include <string.h>

/* --------------------------------Struct------------------------------- */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* ------------------- ------------Functions-------- ------------------- */
/* Write a character */
int _putchar(char);
/* P0T0 */
size_t print_list(const list_t *);
/* P0T1 */
size_t list_len(const list_t *h);
/* P0T2 */
list_t *add_node(list_t **head, const char *str);
/* P0T3 */
list_t *add_node_end(list_t **head, const char *str);
/* P0T4 */
void free_list(list_t *head);
/* P0T5 */
void before_main(void) __attribute__((constructor));

/* --------------------------------------------------------------------- */
#endif /* LISTS_H */
