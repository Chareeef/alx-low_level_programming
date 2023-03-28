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
	int n = 0, d = 1, i = 0, m = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			m *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
		i++;

	i--;

	while (s[i] >= '0' && s[i] <= '9')
	{
		n += (s[i] - '0') * d;
		if (d == 100000000)
			n -= 1;
		if (d < 1000000000)
			d *= 10;
		i -= 1;
	}

	if (n > 0 && m == -1)
		n *= m;

	if (d >= 100000000 && n > 0)
		n += 1;
	if (d >= 100000000 && n < 0)
		n -= 1;

	return (n);
}

