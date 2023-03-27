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
	char s[5];
	char *d;

	d = _strcpy(s, "pomme");
	printf("%s ; %s\n", s, d);

	return (0);
}

