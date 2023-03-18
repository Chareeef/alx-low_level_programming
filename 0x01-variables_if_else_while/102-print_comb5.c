#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all combinations of two-two different digits with putchar
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int lu; /*Our left number units digit*/
	int ld; /*Our left number decimals digit*/
	int ru; /*Our right number units digit*/
	int rd; /*Our right number decimals digit*/

	for (ld = '0'; ld <= '9'; ld++)
	{
		for (lu = '0'; lu <= '9'; lu++)
		{
			for (rd = '0'; rd <= '9'; rd++)
			{
				for (ru = '0'; ru <= '9'; ru++)
				{
					if (lu < ru && ld <= rd)
					{
						putchar(ld);
						putchar(lu);
						putchar(' ');
						putchar(rd);
						putchar(ru);

						if (!(rd == '9' && ru == '9' && ld == '9' && lu == '8'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

