#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integer
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *		 or NULL if not present or if list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	listint_t *current = list;
	listint_t *block_end = NULL;
	size_t i;
	
	if (list == NULL || size == 0)
		return (NULL);

	while (current->next != NULL && current->n < value)
	{
		block_end = current;
		for (i = 0; i < jump_step && current->next != NULL; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n >= value || current->next == NULL)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   block_end->index, current->index);

	while (block_end != NULL && block_end->n < value)
	{
		printf("Value at index [%lu] = [%d]\n", block_end->index, block_end->n);

		if (block_end->n == value)
			return (block_end);

		block_end = block_end->next;
	}

	return (NULL);
}

