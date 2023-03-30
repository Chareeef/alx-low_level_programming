#include "main.h"

/**
 * infinite_add - Add two numbers stored in strings 
 * @s: Our string
 *
 * Return: the encoded string.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (s[i] == input[j] && s[i - 1] != '\\')
				s[i] = output[j];
		}
	}

	return (s);
}
