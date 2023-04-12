#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

int count_words(char *str);
int alloc_strings(char *str, char **words);
char **fill_words(char *str, char** words);

/**
 * strtow - Splits a string into words
 * @str: The string
 *
 * Return: The words array, or NULL if any error.
 */
char **strtow(char *str)
{
	char **words;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	words = (char **) malloc(count_words(str) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	if (alloc_strings(str, words) == 0)
		return (NULL);

	words = fill_words(str, words);
	return (words);
}

/**
 * count_words - Count string words
 * @str: The string
 *
 * Return: The words count
 */
int count_words(char *str)
{
	int i, c = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			c++;
	}
	c++;
	return (c);
}
/**
 * alloc_strings - Allocate strings
 * @str: The string
 * @words: array
 *
 * Return: 1 if success , 0 if fail
 */
int alloc_strings(char *str, char **words)
{
	int i, j = 0, c = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			c = 0;
			for (; str[i] != ' ' && str[i] != '\0'; i++)
				c++;
			c++;
			words[j] = (char *) malloc(c * sizeof(char));
			if (words[j] == NULL)
			{
				for (; j >= 0; j--)
					free(words[j]);
				free(words);
				return (0);
			}
		}
	}

	return (1);
}

/**
 * fill_words - Fill words array
 * @str: The string
 * @words: array
 *
 * Return: The words array
 */
char **fill_words(char *str, char** words)
{
	int i, j = 0, k = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (k = 0; str[i] != ' ' && str[i] != '\0'; k++)
			{
				words[j][k] = str[i];
			}
			words[j][k] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
