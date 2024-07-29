#ifndef LISTS_H
#define LISTS_H

/* --------------------------------Library------------------------------ */
#include<stdlib.h>
#include<stdio.h>

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
int _putchar(char );
/* P0T0 */
size_t print_list(const list_t *);

/* --------------------------------------------------------------------- */
#endif /* LISTS_H */
