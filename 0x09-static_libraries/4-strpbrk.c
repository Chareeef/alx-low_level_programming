#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in s of any of the bytes in accept
 * @s: String within we search
 * @accept: The wanted characters
 *
 * Return: Pointer to the byte that matches in s, or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}

