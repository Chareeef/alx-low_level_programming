#include "lists.h"

/**
 * main - Entry point
 *
 * Return: 0 on Succes.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    n = print_listint(head);
    printf("-> %u elements\n", n);
    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %u elements\n", n);
    free(new);
    return (0);
}
