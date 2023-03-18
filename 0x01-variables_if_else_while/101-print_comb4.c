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
	int c; /*Our hundreads digit*/
	
	for (c = '0'; c <= '9'; c++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			for (u = '0'; u <= '9'; u++)
			{
				if (c < d && d < u)
				{
					putchar(c);
					putchar(d);
					putchar(u);
					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

