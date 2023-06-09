#include "lists.h"

/**
 * print_listint - displays  all the elements of a listint_t list
 * @h: pointer to the beginning of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
    size_t node_count = 0;

    while (h)
    {
        printf("%d\n", h->n);
        node_count++;
        h = h->next;
    }

    return (node_count);
}
