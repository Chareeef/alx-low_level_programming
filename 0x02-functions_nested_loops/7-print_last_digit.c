#include "main.h"

/**
 * print_last_digit - print the last digit of n
 * @n: The number to compute
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n *= -1;
	last = n % 10;
	_putchar(last + '0');
	return (last);
}

