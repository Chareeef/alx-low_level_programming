#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the long integer
 * @index: wanted index
 * 10000011
 * 00010000
 *
 * Return: 1 in success case, or -1 for error case
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int one_at_index;

	if (index >= sizeof(n) * 8 || !n)
		return (-1);

	one_at_index = 1UL << index;

	if ((*n >> index) & 1)
		*n ^= one_at_index;

	return (1);
}
