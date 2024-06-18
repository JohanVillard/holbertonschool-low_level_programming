#include <stdio.h>

/**
 * main - Entry point
 * Display one single digit with ', '
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii0 = 48;
	int ascii1 = 49;
	int ascii9 = 57;
	int first_num;
	int second_num;
	int count = 0;

	for (first_num = ascii0; first_num < ascii9 + 1; first_num++)
	{

		for (second_num = ascii1 + count; second_num < ascii9 + 1; second_num++)
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

