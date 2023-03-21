#include "main.h"

/**
 * print_alphabet_x10 - Print lower alphabet 10 times with _putchar
 *
 * Return: 0 on Succes.
 */
void print_alphabet_x10(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

