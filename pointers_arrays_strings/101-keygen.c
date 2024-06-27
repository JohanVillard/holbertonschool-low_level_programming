#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * _atoi - convert string to integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int main(void)
{	
	srand(time(NULL));
	int r_size, r_num = 0, i;
	char password[10];

	r_size = rand() % (10 - 5 + 1) + 5;

	for (i = 0; i < r_size; i++)
	{
		r_num = (rand() % (126 - 48 + 1)) + 48;
		password[i]= r_num;
	}

	printf("%s\n", password);

	return (0);
}
