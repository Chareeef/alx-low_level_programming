#include "main.h"

/**
 * leet - Encode a string into 1337
 * @s: Our string
 *
 * Return: the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "aAeElLoOtT";
	char n[] = "4433110077";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
				s[i] = n[j];
		}
	}

	return (s);
}
