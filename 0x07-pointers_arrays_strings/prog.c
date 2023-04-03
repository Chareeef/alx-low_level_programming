#include "main.h"
#include <stdio.h> 

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello mery, I love you";
    char *f;

    f = _strstr(s, "meryama");

    if (f == NULL)
    {
	    printf("Error\n");
    } else {
        printf("%s\n", f);
    }
    return (0);
}
