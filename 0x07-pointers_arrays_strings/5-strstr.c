#include "main.h"

/**
 * _strstr - Locates the first occurrence in needle in haystack
 * @haystack: String within we search
 * @needle: The wanted string
 *
 * Return: Pointer to the beginning of match in haystack, or NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, tmp;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0, tmp = i; haystack[tmp] == needle[j]; j++, tmp++)
			{
				if (needle[j + 1] == '\0')
					return (haystack + i);
				if (haystack[tmp + 1] == '\0')
					break;
			}
		}
	}
	return (0);
}

