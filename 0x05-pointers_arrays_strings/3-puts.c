#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _puts - Print a string
 * @str: Our string
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

