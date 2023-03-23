#include "main.h"

/**
 * print_triangle - Prints a triangle using '#'.
 * @size: triangle's size
 *
 * Return: voiđ
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = size - 1; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		for (k = j; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size < 1)
		_putchar('\n');
}

