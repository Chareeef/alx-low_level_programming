#include "main.h"

/**
 * print_alphabet - Print lower alphabet with _putchar
 *
 * Return: 0 on Succes.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

