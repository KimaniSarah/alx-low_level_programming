#include "hash_tables.h"
/**
 * hash_table_delete - deletes the hash table
 * @ht:the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *current;
	hash_table_t *head = ht;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				temp = current;
				current = current->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}
	free(head->array);
	free(head);
}
