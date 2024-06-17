#include <stdio.h>

/**
 * main - Entry point
 * Display alphabet in lowercase on one line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_a = 97;
	int ascii_z = 122;

	for (ascii_z = 122; ascii_z > ascii_a - 1; ascii_z--)
	{
		putchar(ascii_z);
	}

	putchar('\n');

	return (0);
}
