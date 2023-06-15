#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h:head
 * @idx:index of the list where the new node should be added. Index starts at 0
 * @n: value of the new node
 * Return:the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || *h == NULL)
	{
		return (NULL);
	}
	temp = *h;
	if (temp != NULL)
	{
		i = 1;
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}
		new_node->n = n;
		new_node->next = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
	}
	return (new_node);
}
