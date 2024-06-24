#include "main.h"

/**
 * swap_int - swap value of 2 variables
 * @a: first value
 * @b: second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
