#include "main.h"
#include <stdio.h> 
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: 0 on Succes.
 */
int main(void)
{
	char dest[98] = "Hey ";
	char src[] = "Mey";
	char* ptr; 

	ptr = _strcat(dest, src);
	printf("%s, %s", dest, ptr);
	return (0);
}
