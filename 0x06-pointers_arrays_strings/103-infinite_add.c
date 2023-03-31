#include "main.h"

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
	int i = 0, len1, j = 0, len2, k = 2, overflow = 0, sum, max = 0;

	r[size_r - 1] = '\0';
	if (((n1[0] - '0') + (n2[0] - '0')) > 9)
		max = 1;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	len1 = i + 1;
	len2 = j + 1;
	if (len1 >= len2)
		max += len1;
	else
		max += len2;

	if (max > size_r)
		return (0);

	while (i >= 0 && j >= 0 && k <= size_r)
	{
		sum = (n1[i] - '0') + (n2[j] - '0') + overflow;
		r[size_r - k] = (sum % 10) + '0';
		overflow = sum / 10;
		i--;
		j--;
		k++;
	}

	i++;
	j++;
	k--;

	if (i == 0 && j == 0 && k <= size_r)
	{
		r[size_r - k] = overflow + '0';
	}

	while (j == 0 && i != 0 && k <= size_r)
	{
		sum = (n1[i] - '0') + overflow;
		r[size_r - k] = (sum % 10) + '0';
		overflow = sum / 10;
		i--;
		k++;
	}

	while (i == 0 && j != 0 && k <= size_r)
	{
		sum = (n2[j] - '0') + overflow;
		r[size_r - k] = (sum % 10) + '0';
		overflow = sum / 10;
		j--;
		k++;
	}


	return (r);
}
