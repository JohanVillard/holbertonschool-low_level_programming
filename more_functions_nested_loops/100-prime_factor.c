#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	long int div = 1;
	long int num = 612852475143;

	while (num != 1)
	{
		if (num % div == 0)
		{
			num /= div;
		}
		div++;
	}

	div--;

	printf("%lu\n", div);

	return (0);
}
