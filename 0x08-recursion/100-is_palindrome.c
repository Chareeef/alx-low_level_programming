#include "main.h"
#include <string.h>

/**
 * check_sym - checks if s[i] and s[l - 1 - i] are symetric
 * @s: our string
 * @l: string length
 * @i: counter
 *
 * Return: 1 if symetric, 0 if not.
 */
int check_sym(char *s, int l, int i)
{
	if (s[i] == s[l - 1 - i] && i != l - 1 - i)
	{
		check_sym(s, l, i + 1);
		return (1);
	}

	if (i == l - 1 - i)
		return (1);

	return (0);
}

/**
 * is_palindrome - checks if s is a palindrome
 * @s: our string
 *
 * Return: 1 if n is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = strlen(s);

	if (check_sym(s, l, i) == 1)
		return (1);
	else
		return (0);
}

