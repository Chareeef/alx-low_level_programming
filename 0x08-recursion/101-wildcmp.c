#include "main.h"
#include <string.h>

/**
 * wildcmp - Compares two string using recursion
 * @s1: our first string
 * @s2: our second string, can contain wildcard (*)
 *
 * Return: 1 if s1 and s2 are identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	int t =  1;

	cmp(s1, s2, &t);
	return (t);
}
/**
 * cmp - Compares two string using recursion
 * @s1: our first string
 * @s2: our second string, can contain wildcard (*)
 * @t: tracker
 *
 * Return: 0 or 1.
 */
int cmp(char *s1, char *s2, int* t)
{

	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 != '\0')
		return (0);

	if (*s2 == '*')
	{
		if (cmp(s1, s2 + 1, t))
			return (1);

		if (*s1 != '\0' && cmp(s1 + 1, s2, t))
			return (1);
	}

	if (*s1 == *s2)
	{
		*t = 1;
		cmp(s1 + 1, s2 + 1, t);
		return (1);
	}
	else
	{
		*t = 0;
	}

	return (0);
}
