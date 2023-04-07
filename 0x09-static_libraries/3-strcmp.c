#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if identical, or the difference between
 * the two first different characters.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
