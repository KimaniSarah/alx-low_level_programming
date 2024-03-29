#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in the list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *express;

    if (list == NULL)
        return NULL;

    express = list->express;
    current = list;

    while (express != NULL)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);

        if (express->n >= value || express->express == NULL)
        {
            printf("Value found between indexes [%lu] and [%lu]\n",
                   current->index, express->index);
            break;
        }

        current = express;
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           current->index, express->index);

    while (current != NULL)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

        if (current->n == value)
            return current;

        current = current->next;
    }

    return NULL;
}

