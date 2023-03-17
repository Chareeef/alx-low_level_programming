#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print hex numbers with putchar
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char n; /*Our hex number*/

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}

