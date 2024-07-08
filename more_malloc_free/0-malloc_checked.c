#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: number of byte
 * Return: (0)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	/* Allocation réussie ? */
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
