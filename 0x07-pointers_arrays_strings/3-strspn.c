#include "main.h"

/**
 * _strspn - Count number of bytes in s that consist only of accept characters
 * @s: String within we search
 * @accept: The accepted characters
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}

	return (num);
}

