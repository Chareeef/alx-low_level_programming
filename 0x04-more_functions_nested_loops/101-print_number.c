#include "main.h"

/**
 * print_number - prints an integer with _putchar
 * @n: our integer
 *
 * Return: void
 */
void print_number(int n)
{
	int d, l, p;

	for (d = 10000; d > 1; d /= 10)
	{
		l = n / d;
		p = l;
		if (l == 0 && p == 0)
			continue;
		_putchar(l + '0');
	}
	_putchar('\n');
}

