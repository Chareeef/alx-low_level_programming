#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print numbers with putchar
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n; /*Our number*/

	for (n = 48; n <= 57; n++)
		putchar(n);
	putchar('\n');

	return (0);
}

