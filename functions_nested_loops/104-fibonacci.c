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
	unsigned long int fib0 = 0;
	unsigned long int fib1 = 1;
	unsigned long int fib2;
	unsigned long int cut_fib1;
       	unsigned long int cut_fib2;
	unsigned long int base = 1000;
	int i;
	int limit = 98;

	for (i = 0; i < limit; i++)
	{
		fib2 = fib0 + fib1;
		fib0 = fib1;
		fib1 = fib2;

		if (i != limit - 1)
		{
				cut_fib1 = fib2 / 100000;
				cut_fib2 = fib2 % 100000;
				printf("%lu%lu, ", cut_fib1, cut_fib2);

		}
		else
		{
			cut_fib1 = fib2 / base;
                        cut_fib2 = fib2 % base;
                        printf("%lu%lu", cut_fib1, cut_fib2);
		}
	}

	putchar('\n');

	return (0);
}
