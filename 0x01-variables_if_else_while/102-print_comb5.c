#include <stdio.h>
#include <stdlib.h>

/**
* main - Print all combinations of two-two different digits with putchar
*
* Return: Always 0 (Succes)
*/
int main(void)
{
	int l = 0; /*Our left number*/
	int r = 1; /*Our right number*/

	for (l = 0; l <= 99; l++)
	{
		for (r = l + 1; r <= 99; r++)
		{
			putchar(l / 10 + 48);
			putchar(l % 10 + 48);
			putchar(' ');
			putchar(r / 10 + 48);
			putchar(r % 10 + 48);
			if (l != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
