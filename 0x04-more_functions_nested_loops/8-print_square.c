#include "main.h"

/**
 * print_square - Prints a square using '#'.
 * @size: Square's size
 *
 * Return: voiđ
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size < 1)
		_putchar('\n');
}

