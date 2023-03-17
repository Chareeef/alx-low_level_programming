#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print alphabet
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char c; /*Our letter*/

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return (0);
}

