#include "main.h"

/**
 * set_string - Set the value of a pointer to a char
 * @s: The pointer
 * @t: The char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i] != '\0'; i++)
	{
		**(s + i) = *(to + i);
	}
	**(s + i) = '\0';
}
