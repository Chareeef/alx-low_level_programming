#include "main.h"

/**
 * get_bit - get the long integer bit in a given index
 * @n: the long integer
 * @index: wanted index
 *
 * Return: that bit, or -1 for error case
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > sizeof(n) * 8)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
