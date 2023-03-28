#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert string to integer
 * @s: The string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int n = 0;
	unsigned int d = 1, i = 0;

	while (s[i] < '0' || s[i] > '9')
		i++;

	while (s[i] >= '0' && s[i] <= '9')
		i++;

	while (s[i] >= '0' && s[i] <= '9')
	{
		n += s[i] * d;
		d *= 10;
		i -= 1;
	}

	for (; s[i] == '+' || s[i] == '-'; i--)
	{
		if (s[i] == '-')
			n = -n;
	}

	return (n);
}

