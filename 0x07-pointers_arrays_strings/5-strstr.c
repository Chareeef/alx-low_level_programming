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
	char *l = haystack;
	char *n = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*l == *n && *n != '\0')
		{
			l++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
