#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Print sum of all multiple of 3 or 5
 * Return: 0
 */
int main(void)
{
	int multi3, multi5;
	int num_test;
	int sum = 0;
	int limit = 1024;

	for (num_test = 1; num_test < limit; num_test++)
	{
		if ((num_test % 3) == 0)
		{
			multi3 = num_test;
			multi5 = 0;
		}
		else if ((num_test % 5) == 0)
		{
			multi5 = num_test;
			multi3 = 0;
		}
		else
		{
			multi3 = 0;
			multi5 = 0;
		}
		sum += multi3 + multi5;
	}

	printf("%d\n", sum);

	return (0);
}
