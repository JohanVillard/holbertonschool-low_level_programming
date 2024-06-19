#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Print 50 first fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int fib0 = 0;
	long int fib1 = 1;
	long int fib2;
	int i;
	int limit = 50;

	printf("%lu\n%lu\n", fib0, fib1);

	for (i = 2; i < limit; i++)
	{
		fib2 = fib0 + fib1;
		fib0 = fib1;
		fib1 = fib2;

		printf("%lu, ", fib2);
	}

	putchar('\n');

	return (0);
}
