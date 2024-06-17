#include <stdio.h>

/**
 * main - Entry point
 * Display alphabet exclude q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_lower = 97;
	int q = 113;
	int e = 101;

	for (ascii_lower = 97; ascii_lower < 123; ascii_lower++)
	{
		if (q == ascii_lower || e == ascii_lower)
		{
		}
		else
		{
		putchar(ascii_lower);
		}
	}

	putchar('\n');

	return (0);
}
