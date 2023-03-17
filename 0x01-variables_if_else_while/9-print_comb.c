#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print combinations of single digit numbers with putchar
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n; /*Our number*/

	for (n = 48; n <= 57; n++) /* 48 = '0' and 57 = '9' */
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

