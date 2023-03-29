#include "main.h"

/**
 * _strncat - Concatenates n characters of src to dest
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Characters number
 *
 * Return: The pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while  (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
