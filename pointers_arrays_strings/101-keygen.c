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
	int sum;
	int i;
	char password[100];
	int max_limit;
	int check_sum;

	srand(time(NULL));
	r_size = 1000;
	sum = 0;
	max_limit = 126;
	check_sum = 2772;

	for (i = 0; i < r_size; i++)
	{
		r_num = (rand() % (max_limit - 44 + 1)) + 48;
		if ((sum + r_num) <= 2709)
		{	sum += r_num;
			password[i] = r_num;
		}
		else 
		{
			r_num = check_sum - sum;
			password[i]= r_num;
			password[i + 1] = '\0';
			sum += r_num;
		}
		if (sum == check_sum)
		{
			break;
		}
	}

	printf("%s", password);

	return (0);
}
