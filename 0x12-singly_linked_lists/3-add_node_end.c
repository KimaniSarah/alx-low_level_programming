#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head:adress of 1st node
 * @str:strng
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *newnode;

	if (*head == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (head == NULL)
	{
		*head = newnode;
	}
	else
	{
	temp = *head;
	while (temp->next == NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	}
	return (newnode);
}
