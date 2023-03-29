#include "main.h"

/**
 * string_toupper - Upper a string
 * @s: Our string
 *
 * Return: the upper string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
	}

	return (s);
}
