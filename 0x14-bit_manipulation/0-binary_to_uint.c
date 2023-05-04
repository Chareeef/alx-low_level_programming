#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of 0's and 1's
 *
 * Return: The unsigned integer, or 0 if any error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i, j;

	if (!b)
		return (0);

	i = strlen(b) - 1;
	j = 1;

	for (; i >= 0; i--, j *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += (b[i] - 48) * j;
		if (i == 0)
			break;
	}

	return (num);
}
