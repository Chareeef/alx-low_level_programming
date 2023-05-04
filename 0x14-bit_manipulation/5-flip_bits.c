#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: the first long integer
 * @m: the second long integer
 *
 * Return: that number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int flips;

	i = sizeof(n) * 8 - 1;
	flips = 0;

	while (i >= 0)
	{
		if (((n >> i) & 1) ^ ((m >> i) & 1))
			flips++;
		i--;
	}

	return (flips);
}
