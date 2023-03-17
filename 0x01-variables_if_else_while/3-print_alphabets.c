#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print lowercase and uppercase alphabet
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char c; /*Our letter*/

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

