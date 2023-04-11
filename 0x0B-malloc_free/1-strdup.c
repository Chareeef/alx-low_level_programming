#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Duplicate a string
 * @str: The string to duplicate
 *
 * Return: Pointer to duplicated string, or NULL if any error.
 */
char *_strdup(char *str)
{
	char *s = (char *) malloc(strlen(str) * sizeof(char));
	int i;

	if (str == NULL || s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
