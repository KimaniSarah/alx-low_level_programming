#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *temp, *nextnode;

	temp = head;
	nextnode = NULL;
	count = 0;

	while (temp != NULL)
		{
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		nextnode = temp->next;
		if (nextnode != NULL && nextnode >= temp)
		{
			printf("-> [%p] %d\n", (void *)nextnode, nextnode->n);
			exit(98);
		}
		temp = nextnode;
	}

		return (count);
}

