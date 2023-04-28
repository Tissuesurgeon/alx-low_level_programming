#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added as the new node's str field
 *
 * Return: pointer to the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *fresh_node;

    if (str == NULL)
        return (NULL);

    fresh_node = malloc(sizeof(list_t));
    if (fresh_node == NULL)
        return (NULL);

    fresh_node->str = strdup(str);
    if (fresh_node->str == NULL)
    {
        free(fresh_node);
        return (NULL);
    }

    fresh_node->len = strlen(str);
    fresh_node->next = *head;
    *head = fresh_node;

    return (fresh_node);
}
