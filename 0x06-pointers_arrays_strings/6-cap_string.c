#include "main.h"

/**
 * cap_string - Capitalize a string
 * @s: Our string
 *
 * Return: the upper string.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' && s[i - 1] != '\\')
		{
			if (s[i - 1] < 'A' || (s[i - 1] > 'Z' && s[i - 1] < 'a') || s[i - 1] > 'z')
			{
				s[i] -= 'a' - 'A';
			}
		}
	}

	return (s);
}
