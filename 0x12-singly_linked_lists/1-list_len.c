#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h:head pointer
 * Return:the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	int count;
	const list_t *temp;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
