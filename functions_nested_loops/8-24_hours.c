#include "main.h"

/**
 * jack_bauer - Print each minute of 24 hours
 *
 * Description: Print all minute in format xx:xx
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour1 = 0;
	int hour2 = 0;
	int minute1 = 0;
	int minute2 = 0;
	int hour2_count = 0;

	for (hour1 = 0; hour1 < 3; hour1++)
	{
		if (hour1 == 2)
		{
			hour2_count = 4;
		}
		else
		{
			hour2_count = 10;
		}
		for (hour2 = 0; hour2 < hour2_count; hour2++)
		{

			for (minute1 = 0; minute1 < 6; minute1++)
			{

				for (minute2 = 0; minute2 < 10; minute2++)
				{
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(minute1 + '0');
					_putchar(minute2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
