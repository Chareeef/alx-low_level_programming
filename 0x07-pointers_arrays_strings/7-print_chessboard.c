#include "main.h"

/**
 * print_chessboard - Print a chessboard
 * @a: 8x8 matrix
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] > 64)
				_putchar(a[i][j]);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}

