#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head:adress of 1st node
 * Return:a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	if (*head == NULL)
	{
		return (NULL);
	}

	prevnode = 0;
	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
