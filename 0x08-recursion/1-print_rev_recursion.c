#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Print reverse string using recursion
 * @s: Our String
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int l;

	l = strlen(s);
	_putchar(*(s + l - 1));
	*(s + l - 1) = '\0';
	if (l > 0)
		_print_rev_recursion(s);
}

