#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory for array using malloc, and set it to 0
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

	return (a);
}
