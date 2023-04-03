#include "main.h"
#include <stdio.h> 

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "jii gghio jkrp";
    char *f;

    f = _strpbrk(s, "up");

    if (f == NULL)
    {
	    printf("Error\n");
    } else {
        printf("%s\n", f);
    }
    return (0);
}
