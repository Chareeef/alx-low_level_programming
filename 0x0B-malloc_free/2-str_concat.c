#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenate two strings
 * @s1: Head string
 * @s2: Tail string
 *
 * Return: Pointer to resulting string, or NULL if any error.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	s = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	for (j = 0; j < strlen(s2); i++, j++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
