#include <stdio.h>
#include <stdlib.h>

/**
* main - Print all combinations of THREE different digits with putchar
*
* Return: Always 0 (Succes)
*/
int main(void)
{
	int u; /*Our unity digit*/
	int d; /*Our decimals digit*/
	int c = '0'; /*Our hundreads digit*/
	int min_d = '1'; /*start of d*/
	int min_u = '2'; /*start of u*/

	for (c = '0'; c <= '7'; c++)
	{
		d = min_d;

		while (c < d && d <= '9' && c != '9')
		{
			u = min_u;

			while (d < u && u <= '9' && d != '9')
			{
				putchar(c);
				putchar(d);
				putchar(u);
				if (c != '7')
				{
					putchar(',');
					putchar(' ');
				}
				u++;
			}
			d++;

		}
		min_u++;
		min_d++;
	}

	putchar('\n');

	return (0);
}

