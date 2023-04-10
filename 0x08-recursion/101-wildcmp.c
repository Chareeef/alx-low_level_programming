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
