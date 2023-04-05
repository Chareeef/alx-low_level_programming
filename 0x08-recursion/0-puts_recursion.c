#include "main.h"

/**
 * _puts_recursion - puts() using recursion
 * @s: Our String
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) != '\0')
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}

