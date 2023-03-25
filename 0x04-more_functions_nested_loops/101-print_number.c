#include "main.h"

/**
 * print_number - prints an integer with _putchar
 * @n: our integer
 *
 * Return: void
 */
void print_number(int n)
{
	int d = 1, p = n, l = 0;

	while (p != 0)
	{
		p /= d;
		d *= 10;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (l == 0 && n != 0)
	{
		l = (n / d) % 10;
		d /= 10;
	}

	while (d > 0 && n != 0)
	{
		_putchar(l + '0');
		l = (n / d) % 10;
		d /= 10;
	}
	_putchar(n % 10 + '0');
}

