#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: head
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
