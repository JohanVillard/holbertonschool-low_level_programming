#include "main.h"
#include <stdio.h>

unsigned long int count_num(unsigned long int num);

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
	unsigned long int fib2 = 0;
	unsigned long int count = 0;
	unsigned long int fib0_start, fib0_end, fib1_start, fib1_end;
	unsigned long int fib2_start, fib2_end, carry;
	int limit = 97;
	int i;

	for (i = 0; i < limit; i++)
	{
		if (count < 20)
		{
			fib2 = fib0 + fib1;
			fib0 = fib1;
			fib1 = fib2;

			printf("%lu, ", fib2);
		}
		else if (fib2_start > 0)
		{
			fib2_end = fib0_end + fib1_end;

			if (count_num(fib2_end) > count_num(fib1_end))
			{
				carry = fib2_end / 10000;
				fib2_end %= 10000;
				fib2_start = fib0_start + fib1_start + carry;
			}
			else
			{
				fib2_start = fib0_start + fib1_start;
			}

			if (i != limit - 1)
			{
				printf("%lu%lu, ", fib2_start, fib2_end);
			}
			else
			{
				printf("%lu%lu", fib2_start, fib2_end);
			}

			fib0_start = fib1_start;
			fib1_start = fib2_start;
			fib0_end = fib1_end;
			fib1_end = fib2_end;
		}
		else
		{
			fib0_start = fib0 / 10000;
			fib0_end = fib0 % 10000;

			fib1_start = fib1 / 10000;
			fib1_end = fib1 % 10000;

			fib2_end = fib0_end + fib1_end;

			if (count_num(fib2_end) > count_num(fib1_end))
			{
				carry = fib2_end / 10000;
				fib2_end %= 10000;
				fib2_start = fib0_start + fib1_start + carry;
			}
			else
			{
				fib2_start = fib0_start + fib1_start;
			}

			printf("%lu%lu, ", fib2_start, fib2_end);

			fib0_start = fib1_start;
			fib1_start = fib2_start;
			fib0_end = fib1_end;
			fib1_end = fib2_end;
		}
		count = count_num(fib2);
	}
	putchar('\n');
	return (0);
}

unsigned long int count_num(unsigned long int num)
{
	unsigned long int count = 0;

	if (num == 0)
	{
		return (1);
	}

	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
