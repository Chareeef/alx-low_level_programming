#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * 
 * @grid: the 2D array
 * @height: grid's rows
 *
 * Return: nothing.
 */
char *argstostr(int ac, char **av)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
