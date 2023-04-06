#include "main.h"
#include <string.h>

/**
 * check_sym - checks if s[i] and s[l] are symetric
 * @s: our string
 * @l: string length
 * @i: counter
 * @check: tracker
 *
 * Return: (0) Always.
 */
int check_sym(char *s, int l, int i, int *check)
{
	if (i >= l)
		return (0);
	if (s[i] == s[l])
		check_sym(s, l - 1, i + 1, check);
	else
		*check = 0;
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
	int l = strlen(s) - 1;
	int check = 1;

	check_sym(s, l, i, &check);
	if (check == 0)
		return (0);
	else
		return (1);
}

