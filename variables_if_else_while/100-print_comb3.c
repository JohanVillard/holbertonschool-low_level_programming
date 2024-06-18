#include <stdio.h>

/**
 * main - Entry point
 * Display one single digit with ', '
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_zero = 48;
	int ascii_one = 49;
	int ascii_nine = 57;
	int first_num;
	int second_num;
	int count = 0;

	for (first_num = ascii_zero; first_num < ascii_nine + 1; first_num++)
	{

		for (second_num = ascii_one + count; second_num < ascii_nine + 1; second_num++)
		{
			putchar(first_num);
			putchar(second_num);

			if (first_num == 56)
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}

		count++;
	}

	putchar('\n');

	return (0);
}

