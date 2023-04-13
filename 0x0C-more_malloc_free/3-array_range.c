#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - create integers array containing numbers from min to max
 * @min: minimum number
 * @max: maximum number
 *
 * Return: a pointer to the array, returns NULL if an error occurs.
 */
int *array_range(int min, int max)
{
	int *a;
	int i, j;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = min; i < size; i++, j++)
	{
		a[i] = j;
	}

	return (a);
}
