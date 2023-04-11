#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - Free allocated 2D array of integers
 * @grid: the 2D array
 * @height: grid's rows
 *
 * Return: nothing.
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
