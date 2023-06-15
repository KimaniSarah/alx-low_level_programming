#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t.
 * @head: Pointer to the head pointer of the list.
 * @index: Index of the node to be deleted, starting from 0.
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev, *next;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);

	prev = current->prev;
	next = current->next;

	if (next != NULL)
		next->prev = prev;

	if (prev != NULL)
		prev->next = next;
	else
		*head = next;

	free(current);
	return (1);
}
