#include "main.h"

/**
 * _islower - Check if a character is lowercase or not
 * @c: The charcter to check
 *
 * Return: 1 if lowercase, and 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

