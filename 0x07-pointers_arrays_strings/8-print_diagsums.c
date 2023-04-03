#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two square integer matrix diagonals
 * @a: The square matrix
 * @size: The matrix size
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0, j = 0; i < size; i++, j++)
	{
		sum1 += *(a + (i * size + j));
	}

	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += *(a + (j * size + i));
	}

	printf("%d, %d\n", sum1, sum2);
}

