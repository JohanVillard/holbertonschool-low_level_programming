#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Print 98:x
 * first fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long double fib0 = 0;
	long double fib1 = 1;
	long double fib2;
	int i;
	int limit = 98;

	for (i = 0; i < limit; i++)
	{
		fib2 = fib0 + fib1;
		fib0 = fib1;
		fib1 = fib2;

		if (i != limit)
		{
			printf("%Lf, ", fib2);
		}
		else
		{
			printf("%Lf", fib2);
		}
	}

	putchar('\n');

	return (0);
}
