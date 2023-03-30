#include "main.h"

/**
 * rot13 - Encode a string using rot13
 * @s: Our string
 *
 * Return: the encoded string.
 */ 
char *rot13(char *s)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (s[i] == input[j])
				s[i] = output[j];
		}
	}

	return (s);
}
