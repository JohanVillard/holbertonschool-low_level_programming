#ifndef MAIN_H
#define MAIN_H

/* -------------------------LIBRARY----------------------- */
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/* -------------------------FUNCTIONS--------------------- */
int _putchar(char c);
/* P2T0 */
unsigned int binary_to_uint(const char *b);
/* P2T1 */
void print_binary(unsigned long int n);
/* P2T2 */
int get_bit(unsigned long int n, unsigned int index);
/* P2T3 */
int set_bit(unsigned long int *n, unsigned int index);
/* P2T4 */
int clear_bit(unsigned long int *n, unsigned int index);
/* P2T5 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
/* P2T6 */
int get_endianness(void);

#endif /* MAIN_H */
