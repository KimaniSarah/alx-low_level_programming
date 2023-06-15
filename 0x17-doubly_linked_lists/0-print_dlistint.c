#include "lists.h"
/**
 * print_dlistint-  prints all the elements of a dlistint_t list.
 * @h:head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp_node;

	temp_node = h;
	while (temp_node != NULL)
	{
		count++;
		printf("%d\n", temp_node->n);
		temp_node = temp_node->next;
	}
	return (count);
}
