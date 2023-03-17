#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print numbers
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n; /*Our number*/

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	putchar('\n');

	return (0);
}

