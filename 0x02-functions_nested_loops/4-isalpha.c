#include "main.h"

/**
 * _isalpha - Check if a character is a letter or not
 * @c: The charcter to check
 *
 * Return: 1 if a letter, and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

