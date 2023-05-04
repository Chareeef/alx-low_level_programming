#include "main.h"

/**
 * print_binary - print a long integer in binary format
 * @n: the long integer (ex: 11 -> 1011)
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8 - 1;
	int first_non_zero = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			first_non_zero = 1;

		if (first_non_zero)
		{
			if ((n >> i) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
