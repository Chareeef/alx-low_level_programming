#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Splits a string into words
 * @str: The string
 *
 * Return: The words array, or NULL if any error.
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, c = 0, j = 0, k = 0;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	/* Counting words */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' || (str[i] == ' ' && str[i - 1] != ' '))
			c++;
		if (str[i] != ' ' && str[i + 1] == '\0')
			c++;
		printf("%d ", c);
	}
	c++; /* for NULL, last words item */

	/* Allocating space for words */
	words = (char **) malloc(c * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Filling words */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (k = 0; str[i] != ' '; k++, i++)
			{
				words[j][k] = str[i];
			}
			words[j][k] = '\0';
			j++;
		}
	}
	words[j][0] = '\0';

	return (words);
}
