#include <stdlib.h>
#include <stdio.h>
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

/**
 * _calloc - Allocate memory for array using malloc, and set it to 0
 * @nmemb: number of items
 * @size: bytes size for each item
 *
 * Return: a pointer to the allocated memory, returns NULL if an error occurs.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}

	_memset(a, 0, nmemb);
	return (a);
}
