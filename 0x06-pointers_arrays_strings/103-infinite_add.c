#include "main.h"
#include <string.h>

/**
 * infinite_add - Add two numbers stored in strings
 * @n1: First string number
 * @n2: Second string number
 * @r: The result buffer
 * @size_r: Size of result buffer
 *
 * Return: The result buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1) - 1, j = strlen(n2) - 1;
	int d1, d2, overflow = 0, sum, k = 0, l;
	char temp;

	/* Iterate n1 and n2 from right to left */
	while (i >= 0 || j >= 0 || overflow)
	{
		d1 = i >= 0 ? n1[i] - '0' : 0;
		d2 = j >= 0 ? n2[j] - '0' : 0;
		sum = d1 + d2 + overflow;
		overflow = sum / 10;
		if (k < size_r)
		{
			r[k] = (sum % 10) + '0';
			k++;
		}
		else
		{
			return (0);
		}

		i--;
		j--;
	}

	/* Reverse the result */
	for (l = 0; l < k / 2; l++)
	{
		temp = r[l];
		r[l] = r[k - l - 1];
		r[k - l - 1] = temp;
	}

	/* Add '\0' to r */
	if (k < size_r)
		r[k] = '\0';
	else
		return (0);

	return (r);
}

