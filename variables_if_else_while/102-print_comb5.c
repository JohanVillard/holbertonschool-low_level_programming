#include <stdio.h>

/**
 * main - Entry point
 * Display one single digit with ', '
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii0 = 48;
	int ascii9 = 57;
	int first_num, second_num, third_num, fourth_num, change_fourth;

	for (first_num = ascii0; first_num < ascii9 + 1; first_num++)
	{
		for (second_num = ascii0; second_num < ascii9 + 1; second_num++)
		{
			for (third_num = first_num; third_num < ascii9 + 1; third_num++)
			{
				if (first_num != third_num)
				{
					change_fourth = ascii0;
				}
				else
				{
					change_fourth = second_num + 1;
				}
				for (fourth_num = change_fourth; fourth_num < ascii9 + 1; fourth_num++)
				{
					putchar(first_num);
					putchar(second_num);
					putchar(' ');
					putchar(third_num);
					putchar(fourth_num);
					if ((first_num == ascii9) && (second_num == ascii9 - 1))
					{
					break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

