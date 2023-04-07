#include "main.h"

/**
 * _memcpy - Copy n bytes from src to dest
 * @src: Source memory area
 * @dest: Destination memory area
 * @n: Bytes number to be copied
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

