#include "main.h"

/**
 * cap_string - Capitalize a string
 * @s: Our string
 *
 * Return: the upper string.
 */
char *cap_string(char *s)
{
	int i, k;
	char *sep = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (k = 0; sep[k] != '\0'; k++)
			{
				if (s[i - 1] == sep[k])
					s[i] -= 'a' - 'A';
			}
		}
	}

	return (s);
}
