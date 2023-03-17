#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all combinations of two different digits with putchar
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int u; /*Our right digit*/
	int l; /*Our left digit*/
	int min_u = '1'; /*start of u*/

	for (l = '0'; l <= '9'; l++)
	{
		u = min_u;

		while (l < u && u <= '9')
		{
			if (l != '9')
			{
				putchar(l);
				putchar(u);
				if (l != '8')
				{
					putchar(',');
					putchar(' ');
				}
				u++;
			}
		}
		min_u++;
	}
	putchar('\n');

	return (0);
}

