#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * puts_half - Print the 2nd half of a string, then a new line.
 * @str: Our string
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len = 0, half;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	half = (len + 1) / 2;

	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

