#include "main.h"

/**
 * _puts_recursion - puts() using recursion
 * @s: Our String
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar(*s);
	if (*(s + 1) != '\0' && *s != '\0')
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}

