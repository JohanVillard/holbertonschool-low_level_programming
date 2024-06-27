#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: (0)
 */
int main(void)
{
	int r_size;
	int r_num;
	int i;
	char password[16];

	srand(time(NULL));
	r_size = 15;

	for (i = 0; i < r_size; i++)
	{
		r_num = (rand() % (126 - 32 + 1)) + 32;
		password[i] = r_num;
	}

	printf("%s", password);

	return (0);
}
