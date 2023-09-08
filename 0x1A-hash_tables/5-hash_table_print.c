#include "hash_tables.h"
/**
 * hash_table_print- prints a hash table.
 * @ht:the hash table
 * Returns: the hash table, If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	j = 1;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (j != 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			j = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}

