#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - a singly linked list
 * @str: malloc'ed string
 * @len: the string length
 * @next: pointer to the next node of the list
 *
 * Description: singly linked list node structure.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* LISTS_H */
