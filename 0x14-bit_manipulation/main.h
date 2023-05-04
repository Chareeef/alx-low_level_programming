#ifndef _BIT_H
#define _BIT_H

/* Libraries */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Functions */
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif
