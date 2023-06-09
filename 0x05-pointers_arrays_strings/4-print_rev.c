#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_rev - Print a reversed string
 * @s: Our string
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	while (len >= 1)
	{
		_putchar(s[len - 1]);
		len -= 1;
	}

	_putchar('\n');
}

