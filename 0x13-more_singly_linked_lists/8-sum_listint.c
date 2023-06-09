#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all the data (n) of the listint_t list.
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *current;

    current = head;
    while (current != NULL)
    {
        sum += current->n;
        current = current->next;
    }

    return (sum);
}
