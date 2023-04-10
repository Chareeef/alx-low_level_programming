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
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}

	if (*s1 == *s2)
	{
		wildcmp(s1 + 1, s2 + 1);
		return (1);
	}

	return (0);
}

/**
 * compare_strings - Compares two string using recursion
 * @s1: our first string
 * @s2: our second string, can contain wildcard (*)
 * @iden: identity tracker
 *
 * Return: 1 if s1 and s2 are identical, 0 if not.
 */
int compare_strings(char *s1, char *s2, int *iden)
{
	if (!s1 || !s2)
		return (0);
	if (*s2 == '*')
		skip_wild(s2);
	if (*s2 == '\0')
		return (1);

	if (!(look_forward(s1, s2)))
	{
		*iden = 0;
		return (0);
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		*iden = 0;
		return (0);
	}
	return (compare_strings(++s1, ++s2, iden));
}

/**
 * skip_wild - skip wildcards using recursion
 * @s2: our second string containing wildcard (*)
 *
 * Return: void.
 */
void skip_wild(char *s2)
{
	if (*s2 == '*')
	{
		skip_wild(++s2);
	}
	else
	{
		return;
	}
}

/**
 * look_forward - look for next correspondence in s1
 * @s1: our first string
 * @s2: our second string containing wildcard (*)
 *
 * Return: 1 if a correspondence is found, 0 otherwise.
 */
int look_forward(char *s1, char *s2)
{
	if (*s1 != *s2 && *(s2 - 1) == '*' && *s1 != '\0')
	{
		return (look_forward(++s1, s2));
	}
	if (*s1 == *s2)
	{
		return (1);
	}
	return (0);
}

