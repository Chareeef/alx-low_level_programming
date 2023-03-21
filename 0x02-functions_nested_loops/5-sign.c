#include "main.h"

/**
 * print_sign - Check the sign of a number
 * @n: The number to check
 *
 * Return: 1 if +, -1 if -, and 0 if zero.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
}

