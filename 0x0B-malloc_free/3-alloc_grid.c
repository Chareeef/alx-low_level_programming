#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - Allocates 2D array of integers
 * @width: grid's columns
 * @height: grid's rows
 *
 * Return: Pointer to grid, or NULL if any error.
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int k, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	g = (int **) malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		g[k] = (int *) malloc(width * sizeof(int));
		if (g[k] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}

	return (g);
}
