#include "main.h"
#include <stdio.h> 

void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hellor";
    char *f;

    f = _strchr(s, 'r');

    if (f == NULL)
    {
	    printf("Error\n");
    } else {
        printf("%s\n", f);
    }
    return (0);
}
