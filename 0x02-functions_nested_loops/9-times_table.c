#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int n, f, d, u;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');
		for (f = 1; f < 10; f++)
		{
			d = (n * f / 10) + '0';
			u = (n * f % 10) + '0';
			if (f != '9')
			{
				_putchar(',');
				_putchar(' ');
			}
			if (d != '0')
				_putchar(d);
			if (d == '0')
				_putchar(' ');
			_putchar(u);
		}
		_putchar('\n');
	}
}

