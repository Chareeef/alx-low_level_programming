#include "main.h"

/**
 * get_endianness - checks system endianness
 *
 * Return: 0 if Big endian, 1 if Little endian
 */
int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 1;
	c = (char *) &n;

	/* Tip : Big endian is like normal representation */
	if (*c != 0)
		return (1);
	else
		return (0);
}
