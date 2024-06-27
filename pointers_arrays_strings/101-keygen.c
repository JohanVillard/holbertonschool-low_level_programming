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
	char password[64];
	int max_limit;
	int check_sum;

	srand(time(NULL));
	r_size = 64;
	sum = 0;
	max_limit = 126;
	check_sum = 2772;

	for (i = 0; i < r_size; i++)
	{
		r_num = (rand() % (max_limit - 44 + 1)) + 44;
		if ((sum + r_num) <= 2728)
		{	sum += r_num;
			password[i] = r_num;
			password[i + 1] = '\0';
		}
		else 
		{
			r_num = check_sum - sum;
			sum += r_num;
			password[i]= r_num;
			password[i + 1] = '\0';
			printf("%d", sum);
			break;
		}
	}

	printf("%s", password);

	return (0);
}
