#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * puts2 - Print a string by omitting the odd indexes, then a new line.
 * @str: Our string
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

