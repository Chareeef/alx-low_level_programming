#include "main.h"

/**
 * _strlen_recursion - count string length using recursion
 * @s: Our String
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
		l++;
	else
		return(0);
	l += _strlen_recursion(s + 1);
	return (l);
}

