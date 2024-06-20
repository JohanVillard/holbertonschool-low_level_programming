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
	int limit = 98;

	for (i = 0; i < limit; i++)
	{
		fib2 = fib0 + fib1;
		fib0 = fib1;
		fib1 = fib2;
		
		if (i != limit)
		{
			printf("%lu, ", fib2);
		}
		else
		{
			printf("%lu", fib2);
		}
	}

	putchar('\n');

	return (0);
}
