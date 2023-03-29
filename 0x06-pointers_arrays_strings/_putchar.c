#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to write
 *
 * Return: 1 on Succes.
 * On Error, it returns -1, errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

