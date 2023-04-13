#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc
 * @b: allocated size
 *
 * Return: The allocated memory adress, exit on 98 if an error occurs.
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
