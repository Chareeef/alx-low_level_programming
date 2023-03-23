#include "main.h"

/**
 * print_numbers - Prints nums 0 to 0 using _putchar
 *
 * Return: voiđ
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

