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
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	do {
		_putchar(s[len - 1]);
		len -= 1;
	} while (len >= 1);

	_putchar('\n');
}

