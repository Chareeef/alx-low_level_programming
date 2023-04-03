#include "main.h"

/**
 * _memset - Fill the first n bytes of s with b
 * @s: Memory area to be filled
 * @b: The byte to write into s
 * @n: Bytes number to be filled
 *
 * Return: Pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}

