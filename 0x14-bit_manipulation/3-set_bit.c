#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the long integer
 * @index: wanted index
 *
 * Return: 1 in success case, or -1 for error case
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one_at_index;

	if (index >= sizeof(n) * 8 || !n)
		return (-1);
	one_at_index = 1UL << index;
	*n |= one_at_index;

	return (1);
}
