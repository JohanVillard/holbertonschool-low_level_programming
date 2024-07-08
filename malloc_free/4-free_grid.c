#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - free memory from 2D array
 * @grid: integer 2D grid
 * @height: integer line
 * Return: (s)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

