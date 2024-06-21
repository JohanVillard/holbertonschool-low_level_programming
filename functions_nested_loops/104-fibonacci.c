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
	unsigned long int fib0_end = 0;
	unsigned long int fib1_end = 1;
	unsigned long int fib2_end = 0;
	unsigned long int cut_comma = 1000000000000000000;
	unsigned long int fib0_start = 0;
	unsigned long int fib1_start = 0;
	unsigned long int fib2_start = 0;
	unsigned long int carry;
	int limit = 96;
	int i;

	fib0_start /= cut_comma;
	fib0_end %= cut_comma;
	fib1_start /= cut_comma;
	fib1_end %= cut_comma;


	for (i = 0; i < limit; i++)
	{
		fib2_end = fib0_end + fib1_end;

		if (count_num(fib2_end) > count_num(fib1_end))
		{
			carry = fib2_end / cut_comma;
			fib2_end %= cut_comma;
			fib2_start = fib0_start + fib1_start + carry;
		}
		else
		{
			fib2_start = fib0_start + fib1_start;
		}

		if (i != limit - 1)
		{
			if (fib2_start == 0)
			{
				printf("%lu, ", fib2_end);
			}
			else
			{
				printf("%lu%lu, ", fib2_start, fib2_end);
			}
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
	putchar('\n');
	return (0);
}

/**
 * count_num - count the digits
 * @num: number to count
 *
 * Return: (count)
 */
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
