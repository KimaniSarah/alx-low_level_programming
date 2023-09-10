#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = calloc(table->size, sizeof(shash_node_t));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}
/**
 * shash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key:is the key. key can not be an empty string
 * @value:is the value associated with the key. value must be duplicated.
 * Return:1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *temp, *new_node;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	temp = ht->array[index];
	while (ht->array != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL || strcmp(ht->shead->key, key) > 0)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		else
			ht->stail = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new_node->sprev = temp;
		new_node->snext = temp->snext;
		if (temp->snext != NULL)
			temp->snext->sprev = new_node;
		else
			ht->stail = new_node;
		temp->snext = new_node;
	}
	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht:the hash table
 * @key:the key you are looking for
 * Return:the value , or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
/**
 * shash_table_print -  prints a hash table.
 * @ht:the hash table
 * Return:void
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int first, index;
	shash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}
	first = 1;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (first != 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			first = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print the hash tables key/value pairs in revers
 * @ht:the hash table
 * Return:void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->stail;
		while (temp != NULL)
		{
			if (temp != ht->stail)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->sprev;
		}
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes hash table
 * @ht:the hash table
 * Return:void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	current = NULL;
	tenp = NULL;
	if (ht == NULL)
		return;
	current = ht->shead;
	while (current != NULL)
	{
		temp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}
	free(ht->array);
	free(ht);
}
