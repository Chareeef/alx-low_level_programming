#include "main.h"

/**
 * get_bit - get the long integer bit in a given index
 * @n: the long intege
 * @index: wanted index
 *
 * Return: that bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > sizeof(n) * 8)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
