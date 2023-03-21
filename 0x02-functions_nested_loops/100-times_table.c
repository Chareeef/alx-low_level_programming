#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @m: the n times
 *
 * Return: void
 */
void print_times_table(int m)
{
	int n, f, d, u, c;

	if (m > 0 && m < 15)
	{
		for (n = 0; n <= m; n++)
		{
			_putchar('0');
			for (f = 1; f <= m; f++)
			{
				c = (n * f / 100) + '0';
				d = ((n * f / 10) % 10) + '0';
				u = (n * f % 10) + '0';
				if (f != m)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (c != '0')
					_putchar(c);
				else if (c == '0')
					_putchar(' ');
				if (d != '0' || c != '0')
					_putchar(d);
				else if (d == '0')
					_putchar(' ');
				_putchar(u);
			}
			_putchar('\n');
		}
	}
}

