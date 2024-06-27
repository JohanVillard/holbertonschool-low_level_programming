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
	int r_size;
       	int r_num; 
	int i;
	char password[15];

	srand(time(NULL));
	r_size = 15;

	for (i = 0; i < r_size; i++)
	{
		r_num = (rand() % (122 - 33 + 1)) + 33;
		password[i]= r_num;
	}

	printf("%s", password);

	return (0);
}
