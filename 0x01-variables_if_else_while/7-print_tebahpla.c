#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print reversed alphabet
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char c; /*Our letter*/

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}

