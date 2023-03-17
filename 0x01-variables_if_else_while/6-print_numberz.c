#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print numbers with putchar
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char n; /*Our number*/

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}

