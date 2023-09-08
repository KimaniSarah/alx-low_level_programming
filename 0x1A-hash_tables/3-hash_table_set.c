#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key:the key and cant be empty
 * @value: the value associated with the key. value must be duplicated. value can be an empty string
 * Return:1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (strlen(key) == 0)
	{
		return (0);
	}
	index = key_index(key);

	strcpy(ht[index], value);
	return (1);
}
