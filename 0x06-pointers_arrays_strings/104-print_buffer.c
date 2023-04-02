#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Print specific size of a buffer
 * @b: The buffer
 * @size: The buffer size
 *
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	while (j <= size - 1)
	{
		printf("%08x: ", j);
		for (i = 0; i < 5; i++)
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");
			j++;
			if (j < size)
				printf("%02x ", b[j]);
			else
				printf("   ");
			j++;
		}
		j -= 10;
		for (i = 0; i < 10 && j < size; i++)
		{
			if (b[j] > 31)
				printf("%c", b[j]);
			else
				printf(".");
			j++;
		}
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
