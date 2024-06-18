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
	int ascii2 = 50;
	int ascii9 = 57;
	int first_num;
	int second_num;
	int third_num;
	int count = 0;
	int count2 = 0;

	for (first_num = ascii0; first_num < ascii9 + 1; first_num++)
	{
		count2 = count;

		for (second_num = ascii1 + count; second_num < ascii9 + 1; second_num++)
		{

			for (third_num = ascii2 + count2; third_num < ascii9 + 1; third_num++)
			{
				putchar(first_num);
				putchar(second_num);
				putchar(third_num);

				if (first_num == 55)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			count2++;
		}
		count++;
	}

	putchar('\n');

	return (0);
}

