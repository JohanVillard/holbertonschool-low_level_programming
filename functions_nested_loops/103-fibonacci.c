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
	long int fib0 = 1;
	long int fib1 = 2;
	long int fib2;
	long int sum = 0;
	int i;
	int limit = 1000;

	for (i = 0; i < limit; i++)
	{
		fib2 = fib0 + fib1;
		fib0 = fib1;
		fib1 = fib2;
		if (i != limit - 1)
		{
			if (fib2 > 4000000)
			{
				break;
			}
			else if (fib2 % 2 == 0)
			{
		o		sum += fib2;
			}
		}
		printf("%lu", sum);
	}

	putchar('\n');

	return (0);
}