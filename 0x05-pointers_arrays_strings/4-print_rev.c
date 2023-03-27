#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _puts - Print a reversed string
 * @str: Our string
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i = i - 1;
	}

	_putchar('\n');
}

