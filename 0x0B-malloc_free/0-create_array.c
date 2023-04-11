#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Create an array and initialize it with c
 * @size: The array's size
 * @c: Initial character
 *
 * Return: Pointer to array, or NULL if any error.
 */
char *create_array(unsigned int size, char c)
{
	char *s = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
